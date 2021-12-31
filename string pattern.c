#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int i,len;
   gets(a);
   len=strlen(a);
   for(i=1;i<=len;i++)
   {
   printf("%.*s\n",i,a);
   }
   return 0;
} 