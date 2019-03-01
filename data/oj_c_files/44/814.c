#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int fan(int x)
{
	int i,a[100],b[200],sign=0,c=0;
	if(x>=0)
	{	for(i=1;;i++)
		{
			b[i]=x%10;
			x=(x-b[i])/10;
			sign+=1;
			if(x==0)
				break;
		}
		for(i=sign;i>=1;i--)
			c+=b[i]*pow(10,sign-i);
		return c;
	}
	if(x<0)
	{	
		x=-1*x;
		for(i=1;;i++)
		{
			b[i]=x%10;
			x=(x-b[i])/10;
			sign+=1;
			if(x==0)
				break;
		}
		for(i=sign;i>=1;i--)
			c+=b[i]*pow(10,sign-i);
		return -1*c;
	}

}
int main()
{
	int a[6],i;
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	a[i]=fan(a[i]);

	
	}
	for(i=0;i<=5;i++)	printf("%d\n",a[i]);
	return 0;
}




	
	