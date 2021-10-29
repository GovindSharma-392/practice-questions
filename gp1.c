#include<stdio.h>
int main()
{
int x,n;
scanf("%d",&x);
x==(x>>1)<<1;
if(x%2==0)
{
printf("no. is even");
}
else
{
printf("no. is odd");
}
return 0;
}

