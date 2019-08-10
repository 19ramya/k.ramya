#include<stdio.h>
int main()
{
int y,c,a=0;
scanf("%d%d",&y,&c);
c=100-c;
while(y>0)
{
a=a+y;
y=(c*y)/100;
}
printf("%d",a);
return 0;
}
