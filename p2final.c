#include<stdio.h>
typedef struct _fraction
{
int num,den;
}fraction ;
fraction input_fraction()
{
  fraction a;
  scanf("%d %d",&a.num,&a.den);
  return(a);
}
fraction largest_fraction(fraction a,fraction b,fraction c)
{
  int large=a.num*b.den*c.den,id=0;
  if(large<a.den*b.num*c.den)
  {
    large=a.den*b.num*c.den;
    id=1;
  }
  if(large<a.den*b.den*c.num)
  {
    id=2;
  }
  if(id==0)
  {
    return(a);
  }
  if(id==1)
  {
    return(b);
  }
  return(c);
}
void output(fraction f1, fraction f2, fraction f3, fraction larg)
{
  printf("%d/%d is the largest of the fractions\n",larg.num,larg.den);
}
int main()
{
  fraction a,b,c,large;
  a=input_fraction();
  b=input_fraction();
  c=input_fraction();
  large=largest_fraction(a,b,c);
  output(a,b,c,large);
}
