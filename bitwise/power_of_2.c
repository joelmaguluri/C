#include<stdio.h>
#include<limits.h>
void main()
{
  int n,temp=0;
  scanf("%d",&n);
  temp=n<<1;
  printf("%d%d",n,temp);
  if(temp/n==2&&temp%n==0)
   printf("power of 2");
  else
   printf("no");
}
