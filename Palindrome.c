#include<stdio.h>
int main()
{
	int n,r,res=0,p;
	scanf("%d",&n);
	p=n;
	while(n!=0)
	{
	    r=n%10;
	    res=res*10+r;
	    n=n/10;
	}
if(res==p)
{
    printf("Palindrome");
}
else
{
    printf("Not Palindrome");
}
}