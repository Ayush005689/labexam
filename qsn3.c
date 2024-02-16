#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,x1,x2,d;
    printf("enter a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;

    if(d>=0)
    printf("\n the roots are x1=%d and x2=%d",x1,x2);

    else
    printf("the roots are imaginary");
    return 0;
}