#include<stdio.h>
void main()
{
    int num,r;
    printf("Enter the number : ");
    scanf("%d",&num);
    r=num%2;
    if(r==0)
    printf("The given number is Even ");
    else
    printf("The given number is Odd ");
}