#include<stdio.h>
void main()
{
int a[100][100],i,j,n,count=0;
{
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
{
for(i=1;i<=n+1;i++)
{
for(j=1;j<=n+1;j++)
{
a[0]a[j]=0;
a[i]a[0]=0;
a[i]a[n+1]=0;
a[n+1]a[i]=0;
}
{
for(i=1;i<n+1;i++)
{
for(j=1;j<n+1;j++)
}
if(a[i][j]==1)
}
}
}
}
count c++;
}
