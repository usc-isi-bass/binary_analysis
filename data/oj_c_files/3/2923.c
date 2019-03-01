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
	int i=0,j=0,n,m,k;
	int a[1000];
	cin>>n>>k;
	for(m=0;m<n;m++)
	cin>>a[m];
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				cout<<"yes";
				return 0;
			}
		}
	}
	cout<<"no";
	return 0;
}
