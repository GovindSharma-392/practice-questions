#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int i,j;
   gets(a);
   for(i=0;a[i]!=32;i++)
   {}
   for(j=i+1;a[j]!=32;j++)
   {
       printf("%c",a[j]);
   }
   return 0;
} 