#include<stdio.h>
int main()
{
    int n,z,count=0;
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
    if(count>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    
}