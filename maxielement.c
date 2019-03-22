#include <stdio.h>
 
int main() 
{
 int i,a;
 int arr[100];
 printf("enter the 1 to 100 value");
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {
  printf("enter the number:",i+1);
  scanf("%d",&arr[i]);
 }
 for(i=0;i<=a;i++)
 {
  if(arr[0]<arr[i])
   a[0]=a[i];
 }
 printf("largest element%d",a[0]);
}
