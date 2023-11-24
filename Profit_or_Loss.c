#include<stdio.h>
int main()
{
    int cs,sp;
    scanf("%d%d",&cs,&sp);
    if(cs>sp)
    {
        printf("Loss");
    }
    else if(cs<sp)
    {
        printf("Profit");
    }
    else
    {
        printf("No Profit and No Loss");
    }
}