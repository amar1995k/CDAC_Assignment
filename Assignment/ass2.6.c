#include<stdio.h>
//sum of digit of given number
int main()
{
      printf("Enter the Number ");
      int num;
      int s=0;
      scanf("%d",&num);
      int temp=num;
    while(temp>0)
    {
      int d=temp%10;
  
      temp=temp/10;
      s=s+d;
      
    }
    printf("The sum of digits of numbers is %d\n",s);
  
      return 0;
}