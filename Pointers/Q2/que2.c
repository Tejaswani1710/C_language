#include<stdio.h>
void main ()
{
 float table[2][3]={{1.1,1.2,1.3},{2.1,2.2,2.3}};
 printf("\n table= %d",table);
 printf("\n table+1= %d",(table+1));
 printf("\n *(table+1)= %p",*(table+1));
 printf("\n *(table+1)+1= %p",*(table+1)+1);
 printf("\n *(table)+1= %p",*(table)+1);
 printf("\n *(*(table+1))= %0.1f",*(*(table+1)));
 printf("\n *(*(table)+1)= %0.1f",*(*(table)+1));
 printf("\n *(*(table+1))= %0.1f",*(*(table+1)));
 printf("\n *(*(table)+1)+1= %0.1f\n",(*(*(table)+1)+1));

}
