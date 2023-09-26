#include <stdio.h>

int main()
{
  char ch;
  printf("Enter any character :  ");
  scanf("%c", &ch);
  
  if (ch >= 48 && ch <= 57)
  {
  	printf("\n %c is a Digit\nAscii value is %d", ch,ch);  	
  }
  else if ( (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) )
  {
  	printf("\n %c is an Alphabet\nAscii value is %d",ch, ch);  	
  }    
  else
    printf("\n %c is not an Alphabet or Digit\nAscii value is %d",ch,ch);
  
  return 0;
}