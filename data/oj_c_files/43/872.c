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
	int a[100000],i,j,k,n;
	cin >> n;
	a[1]=2;
	k=2;
	for(i=3;i<=n;i+=2)
	{
		for(j=1;;j++)
		{
			if(a[j]*a[j]>i)
				break;
			else
			{
				if(i%a[j]==0)
					break;
			}
		}
		if(a[j]*a[j]>i)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=1;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(a[i]+a[j]==n)
			{
				cout << a[i] << ' ' << a[j] << endl;
			}
		}
	}
	return 0;
}
