#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,count=0,n;
    scanf("%d",&n);
    if(n==a || n==b)
    {
        printf("True");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            c=a+b;
            if(c==n)
            {
                count++;
                break;
            }
            a=b;
            b=c;
        }
        if(count==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}