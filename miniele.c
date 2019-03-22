#include<stdio.h>
int main() 
{
  int i,b;
  int a[100];
  printf("enter the 1 to 100");
  scanf("%d",&b);
  for(i=0;i<=b;i++)
  {
    printf("the number is:"i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<=b;i++)
  {
    if(a[0]>a[i])
      a[0]=a[i];
  }
  printf("the smallest element is%d",a[0]);
}
