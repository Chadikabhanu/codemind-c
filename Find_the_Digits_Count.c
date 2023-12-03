#include<stdio.h>
int main()
{
    int n,q,c=0;
    scanf("%d",&n);
    while(n>0)
    {
       q=n/10;
       n=q;
       c++;
    }
    printf("%d",c);
}