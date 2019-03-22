
#include<stdio.h>
void main()
{
int a[10],j,n;
printf("enter the limimt");
scanf("%d",&n);
printf("enter the element");
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
printf("the elements with index");
for(i=0;i<n;i++)
{
printf("%d\t%d\n",j,a[j]);
}
}
