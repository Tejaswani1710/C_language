#include<stdio.h>
void main()
{
 char ch;
 printf("\n Enter a character : ");
 scanf("%c",&ch);
switch (ch)
 {
  case 'A':
   printf("\n A for Apple.\n");
   break;
  case 'a':
   printf("\n A for Apple.\n");
   break;
  case 'B':
   printf("\n B for Bat.\n");
   break;
  case 'b':
   printf("\n B for Bat.\n");
   break;
  case 'D':
   printf("\n D for Dog.\n");
   break;
  case 'd':
   printf("\n D for Dog.\n");
   break;
  case 'F':
   printf("\n F for Fan.\n");
   break;
  case 'f':
   printf("\n F for Fan.\n"); 
   break;
  default:
   printf("\n Character is not in the range.\n");
   break;
 }
}
