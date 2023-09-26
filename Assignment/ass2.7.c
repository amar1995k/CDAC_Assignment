#include<stdio.h>
int main()
{
    printf("Enter the number ");
    int num,temp;
     int s=0;
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
       
        int d=temp%10;
        temp=temp/10;
        s=s+d;

    }
    printf("The sum of the digits of given number is %d",s);
    return 0;
}