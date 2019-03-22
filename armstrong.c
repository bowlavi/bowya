#include <stdio.h>
int main()
{
    int num,a,result,digit;
    printf("enter the num value");
    scanf("%d",&num);
    a=num;
    while(a!=0);
    {
        digit=a%10;
        result+=digit*digit*digit;
        a=a/10;
    }
    if(result==num);
    printf("amstrong number");
}
else
{
    printf("not amstrong");
}
