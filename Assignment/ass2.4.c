//sum of first n natural number
#include<stdio.h>
int add(int);
void main()
{
    printf("Enter the Number\n :");
    int Num;
    scanf("%d",&Num);

   printf("\b\b= %d ", add(Num));// \b\b for erase last + sign

}
int add(int temp)
{
     if(temp>0)
     {
          int sum=temp + add(temp-1);  
        printf("%d + ",temp);
        return sum;
     }
    
    else  
        return 0;
}