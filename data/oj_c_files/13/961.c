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


int main( )
{
	int n,i,j,k,a[20000],counter=0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		for (j=0;j<i;j++)
			if (a[i]==a[j]) break;
		if(i==j) counter++;
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<i;j++)
			if (a[i]==a[j]) break;
		if(i==j)
		{cout<<a[i];
		counter--;
		if(counter!=0) cout<<' ';
		}
	}
	return 0;
}