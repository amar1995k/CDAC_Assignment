#include<stdio.h>
void max(int,int);
void main()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d %d",&x,&y);
    max(x,y);
   
    
}
  void max(int a,int b)
{
   int max=(a>b) ? a:b;
    printf("Maxium of two number is %d ",max);
    
 

}