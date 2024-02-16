#include<stdio.h>
int main()
{
    int n,s,i=1,f=1,x=0;
    printf("enter the number:");
    scanf("%d",&n);

    s=n;

    while(i<=n)
    {
      int a=n%10;

      while(i<=a)
      {f=f*i;
      i++;
      }

      x=x+f;
      n=n/10;
      f=1,i=1;
    }



    if(x==s)
    printf("\n n=%d is a strong number",s);

    else
    printf("\n n=%d is not a strong number",s);

    return 0;

}