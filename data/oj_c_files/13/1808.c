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
	int n,i,j,k,l=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		for(j=n-1;j>i;j--)
		{if (a[i]==0)
			break;
			if(a[j]==a[i])
			{for(k=j;k<n;k++)
				a[k]=a[k+1];
			a[k]=0;
			l=l+1;
			}
		}
	for(i=0;i<n-l;i++)
		{if(i==0)
			cout<<a[i];
		else
			cout<<" "<<a[i];}
	return 0;
}