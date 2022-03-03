#include<stdio.h>
int fact(int n)
{
  int a =1;
  for(int i=1;i<n+1;i++)
  {
    a=a*i;
  }
  return(a);
}
void input_n_and_r(int *n, int *r)
{
  scanf("%d %d",n,r);
}
int ncr(int n, int r)
{
  int prd=fact(n)/(fact(n-r)*fact(r));
  return(prd);
}
void output(int n,int c,int prd)
{
  printf("%dC%d = %d\n",n,c,prd);
}
int main()
{
  printf("enter the values of n and r\n");
  int n,r,prd;
  input_n_and_r(&n,&r);
  prd=ncr(n,r);
  output(n,r,prd);
}