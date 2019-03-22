
#include<stdio.h>
void main()
{
int r,s,flag,i;
printf("enter the 2 limits");
scanf("%d%d",&r,&s);
while(r<s)
{
flag=0;
for(i=2;i<r/2;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",r);
++r;
}
}
}
