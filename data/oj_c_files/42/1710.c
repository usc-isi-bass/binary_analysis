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
	int n,i,m,x=0;
	int a[100000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=0;i<n;i++)
	{
		if(a[i]!=m)
		{
			x++;
			if(x==1)
			{
				cout<<a[i];
			}
			else
			{
				cout<<" "<<a[i];
			}
		}
	}
	return 0;
}