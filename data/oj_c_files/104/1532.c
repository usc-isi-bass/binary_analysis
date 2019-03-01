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
	int m,n,s = 0;
	cin>>m>>n;
	int a[100];
	
	a[0]=m;
	for(int i=0;i<=98;i++)
	{
		a[i+1]=a[i]/2;
		if(a[i+1]==1)
		{
			s=i+1;
			break;
		}
	}
	for(int h=0;h<=99;h++)
	{
		for(int i=0;i<=s;i++)
		{
			if(a[i]==n)
			{
				cout<<n;
				return 0;
			}
		}
				n=n/2;
	}
}