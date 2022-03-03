#include<stdio.h>
int input_size()
{
  int a;
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest(int n, int a[n])
{
  int larg_id=0,val=a[0];
  for(int i=1;i<n;i++)
    {
      if(val<=a[i])
      {
        larg_id=i;
        val=a[i];
      }
    }
  return(larg_id);
}
void out_put(int n, int a[n], int largest)
{
  printf("the index of the largest number from the array\n[");
  for(int i=0;i<n-1;i++)
    {
      printf("%d,",a[i]);
    }
  printf("%d]\nis %d\n",a[n-1],largest);
}
int main()
{
  printf("enter the size of the array\n");
  int n=input_size(),largest;
  int a[n];
  printf("enter the %d numbers\n",n);
  input_array(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
}