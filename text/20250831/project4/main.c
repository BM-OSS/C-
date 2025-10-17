#include <stdio.h>
int main()
{
    int a,b,i,j,maxj;
    printf("请输入两个数");
    scanf("%d %d",&a,&b);
    for(i=a;i++;)
    {
        if(i%a==0&&i%b==0)
        break;
    }
    for(j=1;j<=a&&j<=b;j++)
    {
        if(a%j==0&&b%j==0)
        maxj=j;
    }
    printf("%d %d",i,maxj);
    return 0;
}