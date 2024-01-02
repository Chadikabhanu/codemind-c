#include<stdio.h>
#include<math.h>
int main()
{
    int k,n,a,t,r,count=0,sum=0;
    scanf("%d",&n);
    t=n;
    a=n;
    while(a>0)
    {
        a=a/10;
        count++;
    }
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        k=pow(r,count);
        count--;
        sum=sum+k;
        
    }
    if(sum==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}