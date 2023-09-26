#include<stdio.h>
void main()
{
    int sum, add, sub, multi;
    float div;
    int x,y;
    printf("Enter two values :");
    scanf("%d %d",&x,&y);
    add=x+y;
    sub=x-y;
    multi=x*y;
    div=(float)x/y;
    printf("add is %d\n sub is %d\n multi is %d\n div is %f",add,sub,multi,div);
}