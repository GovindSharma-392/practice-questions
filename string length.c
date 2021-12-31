#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int i,count=0;
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
       count++;
   }
   printf("%d",count);
   
   return 0;
} 