#include<stdio.h>
int main()
{
int a=5,b=12;
a=a^b;
b=a^b;
a=a^b;
printf("%d\n%d\n",a,b);
return 0;
}
