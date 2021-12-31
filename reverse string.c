#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   int len,i;
   gets(a);
   len=strlen(a);
   len= len-1;
   for(i=len;i>=0;i--)
   {
       printf("%c",a[i]);
   }
   return 0;
} 