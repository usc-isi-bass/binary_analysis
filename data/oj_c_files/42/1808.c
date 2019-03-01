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
	int n,k,j,i;
	j=0;
	cin>>n;
	int a[n-1];
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	for(i=0;i<n-j;i++)
	{
		if(a[i]==k)
		{
		j=j+1;
		for(int t=i;t<n-j;t++)
			{
			a[t]=a[t+1];
			}
		a[n-j]=0;
		i=i-1;
		}
	}
	for(i=0;i<n-j;i++)
		{
		if(i==0)
			cout<<a[i];
		else
			cout<<" "<<a[i];
		}
	return 0;
}