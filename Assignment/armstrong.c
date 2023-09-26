#include<stdio.h>
void main()
{
    int s,d,c,Num;
    s=0;
    printf("Enter three digit num : ");
    scanf("%d",&Num);
    int n=Num;
    while(n>0)
    {
        d=n%10;
        c=d*d*d;
        n=n/10;
        s=s+c;
        printf("sum is %d \n",s);
    }
    if(s==Num)
    {
    printf("%d is armstrong",Num);
    }
    else
    {
    printf("sum of cube of digits is not equal to %d\n",Num);
    printf("%d is not armstrong",Num);
    }
}