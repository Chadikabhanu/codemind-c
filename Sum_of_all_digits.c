#include<stdio.h>
int main()
{
    int n,r,k=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        k=k+r;
    }
    printf("%d",k);
}