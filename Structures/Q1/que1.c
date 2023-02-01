#include<stdio.h>

struct time
{
 int hrs;
 int min;
 int sec;
};
int main()
{
 struct time t;
 printf("\n Enter hours: ");
 scanf("%d",&t.hrs);
 printf("\n Enter min: ");
 scanf("%d",&t.min);
 printf("\n Enter sec:");
 scanf("%d",&t.sec);
 printf("\n Your time: %d:%d:%d\n",t.hrs,t.min,t.sec);
}
