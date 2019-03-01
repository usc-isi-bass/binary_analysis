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
	int n,k,sum=0,a,b,c,d;
	cin>>n;
	if(n<=70)
	{
	    for(k=1;k<=n;k++)
	    {
		    a=k-7;
		    if(k%7!=0&&a%10!=0) sum=sum+k*k;
	    }
	    cout<<sum;
	}
	if(n>70&&n<80)
	{
		for(k=1;k<=70;k++)
		{
			b=k-7;
			if(k%7!=0&&b%10!=0) sum=sum+k*k;
		}
		cout<<sum;
	}
	if(n>=80)
	{
		for(k=1;k<=70;k++)
		{
			c=k-7;
			if(k%7!=0&&c%10!=0) sum=sum+k*k;
		}
		for(k=80;k<=n;k++)
		{
			d=k-7;
			if(k%7!=0&&d%10!=0) sum=sum+k*k;
		}
		cout<<sum;
	}
	return 0;
}