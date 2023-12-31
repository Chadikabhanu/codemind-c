#include<stdio.h>
int main()
{
    int i=1,n,r,res=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;
    }
    printf("%d",res);
}