#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int se=0,so=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        se=se+arr[i];
        else
        so=so+arr[i];
    }
    if(se>so)
    printf("%d",se-so);
    
    else
    printf("%d",so-se);
}