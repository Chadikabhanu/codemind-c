#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,c=0;
    for(i=0;i<n;i++)
    {
        c++;
        if(c%2==1)
        {
            sum=sum+arr[i];
    }
}
printf("%d",sum);
}