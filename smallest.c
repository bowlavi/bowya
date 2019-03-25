#include <stdio.h>
int main() 
{
	int l,s,bcd,num,i;
	scanf("%d %d",&l,&s);
	for(i=1;i<=l && i<=s;i++)
	{
	    if(l%i==0 && s%i==0)
	    {
	        bcd=i;
	    }
	}
	num=(l*s)/bcd;
	printf("%d",num);
	return 0;
}
