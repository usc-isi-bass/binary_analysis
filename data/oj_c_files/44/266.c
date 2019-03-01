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


int reverse(int c)
{
	int i,j,b;
	char a[100];
	if(c>=0)
	{
		for(i=0;10*c/10>0;i++)
		{
			a[i]=c%10;
			c=c/10;
		}
		c=0;
		for(j=i-1;j>=0;j--)
		{
		
			c=c+a[j]*pow((double)10,(i-j-1));
		}
	}

	if(c<0)
	{
		b=0-c;
		for(i=0;10*b/10>0;i++)
		{
			a[i]=b%10;
			b=b/10;
		}
		b=0;
		for(j=i-1;j>=0;j--)
		{

			b=b+a[j]*pow((double)10,(i-j-1));
			
		}
		c=0-b;
	}

	return c;
}
			
		
		




int main()
{
	int a,i;
	for(i=1;i<=6;i++)
	{
		cin>>a;
		cout<<reverse(a)<<endl;
	}
	return 0;
}

