#include<stdio.h>
int main()
{
    int i,x,y=0;
    scanf("%d",&x);
    for(i=1;i<=(x-1);i++)
    {
        if(x%i==0)
        y=y+i;
    }
    printf("%d",y);
}