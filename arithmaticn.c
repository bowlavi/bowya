#include<stdio.h>
void main()
{
int n,b,m,t,i,sum=0;
printf("enter the first number and \ndifference and \nnumber of terms");
scanf("%d%d%d",&n,&b,&m);
for(i=1;i<m;i++)
{
t=n+(m-1)*b;
sum=sum+t;
}
printf("%d",sum);
}
