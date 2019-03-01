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
	int n,i;
	cin>>n;
	char a[1000][50];
	for (i=1;i<=n;i++)
		cin>>a[i];
	int count=0;
	for (i=1;i<=n;i++)
	{
		count=count+strlen(a[i]);
		if (count<=80)
		{
			if (i<n)
			{
			cout<<a[i];
			if (count+1+strlen(a[i+1])<=80)
			{
				cout<<" ";
			}
			count++;
			}
			else if (i==n)
				cout<<a[n];
		}
		else if (count>80)
		{
			if (i<n)
			{
			count=strlen(a[i]);
			cout<<endl;
			cout<<a[i]<<" ";
			count++;
			}
			else if (i==n)
				cout<<a[n];
		}
	}
}