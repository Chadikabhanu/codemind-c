#include<stdio.h>
int main()
{
    int n,count=0,z;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
     scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        {
            count++;
        }
    }
    printf("%d",count);
    
}