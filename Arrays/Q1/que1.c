 #include<stdio.h>
//#include<string.h>
void main()
{
 int i,len=0;
 char a[50];
 printf("\nEnter your name: ");
 scanf("%s",&a);
 for(i=0;a[i]!='\0';i++)
    {
      len++;
    }
 printf("\nLength of your name is %d.",len);
 printf("\nLength of array is from 0-%d\n",len-1);

}
