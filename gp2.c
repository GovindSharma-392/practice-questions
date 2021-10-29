#include<stdio.h>
int main()
{
int x,y,s;
scanf("%d\n%d",&x,&y);
s=x+y;
if((x+y)==(x^y))
{
printf("numbers are valentine");
}
else
{
printf("numbers are not valentine");
}
return 0;
}
