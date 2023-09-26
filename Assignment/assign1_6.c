#include<stdio.h>
void main()
{
    int P,T;
    float R;
    printf("Enter the principal,Time,Rate :\n");
    scanf(" %d %d %f1 ",&P,&T,&R);//scanf(" %d %d %f",&P,&T,&R);
    float SI=P*T*R/100;
    printf("Simple interest is : %.2f ",SI);
}