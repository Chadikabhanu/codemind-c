#include<stdio.h>
int main()
{
    int i,m,n,count=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0 & i%3==0)
        count++;
    }
    printf("%d",count);
}