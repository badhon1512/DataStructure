#include<stdio.h>
int main()
{
  int i,n,count=0;
  printf("enter your choice number:");
  scanf("%d",&n);
  for(i=n;i<=n+15;i++)
  {
      if(i%2!=0&&count!=7)
      {
          printf("%d\n",i);
          count++;
      }

  }

}
