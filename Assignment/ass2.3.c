#include<stdio.h>
void main()
{
    int x,y,z;
  
    char o ;
    printf("Enter two Number : ");
    scanf("%d %d", &x, &y);
    printf("Which operation :");
    scanf(" %c",&o);
    switch(o)
    {
        case '+':
        z=x+y;
        printf("Addition is %d",z);
        break;
         case '-':
        z=x-y;
        printf("Subtraction is %d",z);
        break;
         case '*':
        z=x*y;
        printf("Multiplication is %d",z);
        break;
         case '/':
        //z=(float)x/y;
        printf("Division is %2f", (float)x/y);
        break;
         case '%':
        z=x%y;
        printf("Remaider is %d",z);
        break;
    }
}