#include<stdio.h>
int main()
{
    int n,i,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k*i;
    }
    printf("%d",k);
}