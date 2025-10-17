#include <stdio.h>
int main()
{
   int i,n;
   printf ("请输入一个整数\n");
   scanf("%d",&n);
   if(n<=1)
   {printf("不是质数\n");}
   else
   {
    int flag=1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        flag=0;
        break;
    }
    if(flag==1)
    {printf("是质数\n");}
    else
    printf("不是质数\n");
   }
   return 0;
}