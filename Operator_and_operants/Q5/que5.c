#include<stdio.h>
void  main()
{
 int ar,ai,br,bi,rr,ri;
 char ch;
 printf("\n Enter the real and imaginary parts for a: ");
 scanf("%d%d",&ar,&ai);
 printf("\n Enter the real and imaginary parts for b: ");
 scanf("%d%d",&br,&bi);
 printf("\n Your A is %d+%di",ar,ai);
 printf("\n Your B is %d+%di",br,bi);
 printf("\n Enter the operation you want to perform\n '+'to add\n '-'to substract\n '*'to multiply");
 scanf(" %c",&ch);
 switch(ch)
  {
    case'+':
      printf("\n Addition = %d+%di\n",(ar+br),(ai+bi));
      break;
   case'-':
      rr=ar-br;
      ri=ai-bi;
      if(rr<0||ri<0)
       { 
         if(ri<0&&rr<0)
          printf("\n Substraction = (%d)+(%d)i\n",rr,ri);
         else if(rr<0)
          printf("\n Substraction = (%d)+%di\n",rr,ri);
         else
          printf("\n Substraction = %d+(%d)i\n",rr,ri);
       }
      else
        printf("\n Substraction = %d+%di\n",rr,ri);
      break;
   case'*':
      printf("\n Multiplication = %d+%di\n",((ar*br)-(ai*bi)),((ar*bi)+(ai*br));
      break;
   default:
      printf("\n INVALID CHOICE!!!\n");
      break;
  }
}
