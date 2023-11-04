#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,x,y,z,a,b;
    scanf("%f%f%f",&p,&r,&t);
    x=r/100;
    y=(1+x);
    z=pow(y,t);
    b=p*z;
    a=b-p;
    printf("%.2f",a);
}