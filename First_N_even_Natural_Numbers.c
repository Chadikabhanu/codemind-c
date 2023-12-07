#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=n*2;i>=2;i--)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}
