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
	int a[100000],b,c,f=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b;
		a[i-1]=b;
	}
	cin>>c;
	for(int j=1;j<=n;j++)
	{
		if(a[j-1]-c!=0)
		{
			if(f==0)
			{
				cout<<a[j-1];
				f++;
			}
			else
			{
				cout<<" "<<a[j-1];
			}
		}
	}
	return 0;
}
