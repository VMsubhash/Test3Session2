#include<stdio.h>
void input_string(char *a)
{
  scanf("%[^\n]%*c",a);
}
int count_words(char *a)
{
  int n=0,count=1;
  while(a[n]!=0)
    {
      n=n+1;
    }
  for(int i=0;i<n;i++)
    {
      if(a[i]==32)
      {
        count=count+1;
      }
    }
  return count;
}
void output(char *s, int no_words)
{
printf("the no. of words in the sentence\n%s \nis\n%d\n",s,no_words);
}
int main()
{
  int n;
  char a[50];
  printf("enter the sentence\n");
  input_string(a);
  n=count_words(a);
  output(a,n);
}