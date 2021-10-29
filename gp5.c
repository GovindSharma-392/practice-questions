#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d%d%d",&x,&y,&z);
if(x>y&&y>z)
{
printf("x is greater among them");
}
if(y>x&&x>z)
{
printf("y is greater among them");
}
if(z>x&&x>y)
{
printf("z is greater among them");
}
return 0;
}
