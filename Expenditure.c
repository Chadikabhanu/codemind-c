#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    t=y*30;
    if(t<=x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}