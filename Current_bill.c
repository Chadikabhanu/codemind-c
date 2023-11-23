#include<stdio.h>
int main()
{
    int x;
    float b,c;
    scanf("%d",&x);
    if(x<200)
    {
        c=1.20;
    }
    else if(x>=200 && x<=400)
    {
        c=1.50;
    }
    else if(x>=400 && x<=600)
    {
        c=1.80;
    }
    else if(x>=600)
    {
        c=2.00;
    }
    b=x*c;
    if(b>=400)
    {
        printf("%.2f",(b+(b*0.15)));
    }
    else
    {
        printf("%.2f",(b+100));
    }
}
