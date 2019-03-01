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
	int n,m,x=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int k=0;k<n-1;k++)
	{
		for(int j=k+1;j<n;j++)
		{
			if(a[j]+a[k]==m)
			{
				x=1;
			}
		}
	}
	if(x==1) cout<<"yes";
	else if(x==0) cout<<"no";
	return 0;
}

