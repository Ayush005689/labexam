#include<stdio.h>
int main()
{
    int r;
    float vol,a;
    printf("enter the radius r:");
    scanf("%d",&r);

    float P=3.14;
    vol=P*r*r*r;
    a=2*P*r*r;

    printf("\n volume of sphere=%f",vol);
    printf("\n surface area of sphere=%f",a);
    return 0;
}