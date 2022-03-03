#include<stdio.h>
int input_degree()
{
  int a;
  scanf("%d",&a);
  return(a);
}
int input_x()
{
  float a;
  scanf("%f",&a);
  return(a);
}
void input_coefficients(int n, float a[n])
{
  for(int i=0;i<n;i++)
    {
      scanf("%f",&a[i]);
    }
}
float evaluate_polynomial(int n, float a[n], float x)
{
  float fin=a[0];
  for(int i=1;i<n;i++)
    {
      fin=(fin*x)+a[i];
    }
  return(fin);
}
void output(int n, float a[n], float x, float result)
{
  printf("value of the polynomial for x=%.2f\n%.2f",x,a[n-1]);
  for(int i=n-2;i>=0;i--)
    {
      printf(" + %.2fX^%d ",a[i],n-i-1);
    }
  printf(" = %.2f\n",result);
  
}
int main()
{
  printf("enter the degree\n");
  int n=input_degree()+1;
  float x,result;
  printf("enter the value of x\n");
  x=input_x();
  float a[n];
  printf("enter the %d coefficients in decreasing order of degree\n",n);
  input_coefficients(n,a);
  result=evaluate_polynomial(n,a,x);
  output(n,a,x,result);
}