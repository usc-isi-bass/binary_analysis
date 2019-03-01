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

int main ()
{
	int a[100000]={0},n,k,i=0,j,l=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(j=0;j<n;j++)
	{
		if(a[j]==k)continue;
		else
		{
			l++;
			if(l==1)
			{
				cout<<a[j];
			}
			else
			{
				cout<<" "<<a[j];
			}
		}
	}





















	return 0;
}