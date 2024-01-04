#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(j%2==0)
           {
               k=0;
           }
           else
           {
               k=1;
           }
           printf("%d ",k);
        }
        printf("
");
    }
}