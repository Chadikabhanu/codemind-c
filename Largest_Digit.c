#include<stdio.h>
int main()
{
    int n,r,h=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(h<r)
    {
        h=r;
    }
    }
    printf("%d",h);
}