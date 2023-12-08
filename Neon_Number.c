#include<stdio.h>
int main()
{
    int n,x,r,sum=0;
    scanf("%d",&n);
    x=n*n;
    while(x!=0)
    {
        r=x%10;
        x=x/10;
        sum=sum+r;
    }
    if(sum==n)
    {
        printf("Neon Number ");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}