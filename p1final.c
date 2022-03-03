#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  scanf("%d %d",num1,den1);
  scanf("%d %d",num2,den2);
}
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
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int hcf;
  *num3=(num1*den2)+(num2*den1);
  *den3=(den1*den2);
  hcf=gcd(*num3,*den3);
  *num3=*num3/hcf;
  *den3=*den3/hcf;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
  printf("\n");
}
int main()
{
  printf("enter the two fractions\n");
  int num1,num2,num3,den1,den2,den3;
  input(&num1, &den1, &num2, &den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
}