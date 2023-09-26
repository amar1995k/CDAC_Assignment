#include<stdio.h>
int main()
{
    int l;
    char s[10];
    printf("Enter the string \n");
    gets(s);
    for(l=0;s[l];l++);
    for(int i=0;i<l/2;i++)
    {
        int ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;

    }
    printf("Revesred string is \n %s: ",s);

    return 0;
}