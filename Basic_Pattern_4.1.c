#include<stdio.h>
int main()
{
    int a,k;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
       if(i%2==0)
       {
           k=1;
       }
       else
    {
        k=0;
    }
    for(int j=1;j<=a;j++)
    {
        printf("%d ",k);
    }
    printf("
");
    }
}