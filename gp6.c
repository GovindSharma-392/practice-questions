#include<stdio.h>
int main()
{
int x,y,z,r;
scanf("%d",&x);
y=x%10;
x=x/10;
z=x%10;
x=x/10;
r=y*100+z*10+x*1;
printf("%d",r);
return 0;
}
