#include<stdio.h>
int main()
{
    int n;
    float i,h=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        h=h+(1/i);
    }
    printf("%.2f",h);
}