#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
x=y>>(z-1);
(x&1)?printf("the bit is 1"):printf("the bit is 0");
return 0;
}
