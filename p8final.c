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
void input_n_fraction(int n, fraction f[n])
{
  for(int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
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
fraction add_n_fractions(int n,fraction f[n])
{
  fraction sum;
  sum=f[0];
  for(int i=1;i<n;i++)
    {
      sum=add_fractions(sum,f[i]);
    }
  return(sum);
}
void output(int n, fraction sum, fraction f[n])
{
  printf("%d/%d",f[0].n,f[0].d);
  for(int i=1;i<n;i++)
    {
      printf(" + %d/%d",f[i].n,f[i].d);
    }
  printf(" = %d/%d\n",sum.n,sum.d);
}
int main()
{
  int n;
  printf("enter the no. of fractions to add\n");
  scanf("%d",&n);
  fraction a[n],sum;
  printf("enter the %d fractions\n",n);
  input_n_fraction(n,a);
  sum=add_n_fractions(n,a);
  output(n,sum,a);
}
