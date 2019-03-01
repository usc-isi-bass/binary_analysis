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
	int n,i,j,x,shu=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(a[i]!=x)
		{
			if(shu==0)
				cout<<a[i];
			else
				cout<<" "<<a[i];
			shu++;
		}
	}
	return 0;
}