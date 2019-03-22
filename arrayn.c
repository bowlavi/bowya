#include<stdio.h>
void main()
{
int a[10],i,j,d,temp;
printf("enter limit");
scanf("%d",&d);
printf(" enter the number");
for(i=0;i<d;i++)
{
scanf("%d",&a[i]);
}
printf("sorted array");
for(i=0;i<d;i++)
{
for(j=1;j<d;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
}
for(i=0;i<d;i++)
{
printf("%d\d",a[i]);
}
}
