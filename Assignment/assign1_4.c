#include<stdio.h>
int main()
{
    int i=8,j=5;
    float x=0.005, y=0.01;
    char c='c',d='d';
    int exp1,exp2,exp3,exp4,exp5;
    exp1=(3*i*j)%(2*d);
    exp2=(i*j)%(c+2*d)/(x*y);
    exp3=5*(i+j)>'c';
    exp4=2*x+(y==0);
    exp5=(x>y)&&(i>0)||(j<5);
    printf("%d\n %d\n %d\n %d\n %d",exp1,exp2,exp3,exp4,exp5);
    return 0;
}