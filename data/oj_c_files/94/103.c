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
	int a[501];
	int b[501];
	int n,m,i,j,e;
	cin>>n;
	m=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2!=0)//???????b
		{
			b[m+1]=a[i];
			m++;
		}
	}
	for(i=1;i<=m-1;i++)
		for(j=1;j<=m-i;j++)//????
			if(b[j]>b[j+1])
			{
				b[0]=b[j];
				b[j]=b[j+1];
				b[j+1]=b[0];
			}
	e=0;
	for(i=1;i<=m;i++)//??
	{
		if(e==1)
			cout<<',';
		cout<<b[i];
		e=1;
	}
	return 0;
}