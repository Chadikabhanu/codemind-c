#include<stdio.h>
int main()
{
    int i=1,x,y,sum=0;
    scanf("%d%d",&x,&y);
    while(i<x)
    {
        if(x%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==y)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    
}