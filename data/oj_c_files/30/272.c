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

int main()
{
	int n=0,i=0,sum=0,b=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i<10)
		{
			if(i!=7)
			sum=sum+i*i;
		}
		else
		{
			b=i/10;
			if(i%10!=7&&i%7!=0&&b!=7)
				sum=sum+i*i;
		}
	}
	cout<<sum;
	return 0;
}