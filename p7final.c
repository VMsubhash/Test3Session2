#include<stdio.h>
typedef struct _fraction
{
int n,d;
} fraction;
int gcd(int a, int b)
{
  int i;
  if(a>b){
    i=b;
  }else{
    i=a;
  }
  for(;i>0;i--)
    {
      if(a%i==0 && b%i==0)
      {
        return(i);
      }
    }
}
fraction input_fraction()
{
  fraction a;
  scanf("%d %d",&a.n,&a.d);
  return a;
}
fraction add_fractions(fraction f1, fraction f2)
{
  int hcf;
  fraction a;
  a.n=(f1.n*f2.d)+(f2.n*f1.d);
  a.d=(f1.d*f2.d);
  hcf=gcd(a.d,a.n);
  a.n=a.n/hcf;
  a.d=a.d/hcf;
  return(a);
}
void output(fraction a,fraction b, fraction sum)
{
  printf("%d/%d + %d/%d = %d/%d\n",a.n,a.d,b.n,b.d,sum.n,sum.d);
}
int main()
{
  fraction sum,a,b;
  a=input_fraction();
  b=input_fraction();
  sum=add_fractions(a,b);
  output(a,b,sum);
}
