#include<stdio.h>
void main()
{
    int a,b;
    printf("%d%d",a);      //a=0 b=garbage value
    printf("%d%d",12);     //a=12 b=garbage value
    scanf("%d%d",&a,&b);   //getting 2 input from user
    printf("%d%d",a);      //a=user given value b=0(value of b is gvn but not printed) 

}