#include<stdio.h>
int factor(int temp);
int s=0;
int main()
{
   
    printf("Enter the num to find sum of prime factors  : ");
    int n;
    scanf("%d",&n);
  factor(n);


 return 0;
}
int factor(int temp)
{
    int i=2;
   if(temp==1)
    return 0;
    while(temp%i!=0)
       i++;
     printf("%d ",i);
   factor(temp/i);
    
}