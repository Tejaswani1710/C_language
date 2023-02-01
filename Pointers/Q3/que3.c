#include<stdio.h>
void main()
{
 char*color[6]={"red","green","blue","white","black","yellow"};
 printf("\n color= %d",color);
 printf("\n color+2= %d",color+2);
 printf("\n *color= %s",*color);
 printf("\n *(color+2)= %s",*(color+2));
 printf("\n color[5]= %s",color[5]);
 printf("\n *(color+5)= %s\n",*(color+5));
}
