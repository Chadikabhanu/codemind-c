#include<stdio.h>
int main()
{
    int n,max;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}