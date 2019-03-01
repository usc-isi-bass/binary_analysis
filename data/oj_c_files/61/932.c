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
	int n,k,x;
	cin>>n;
	int a[n];
	int sum[n];
	for(k=0;k<n;k=k+1)
	{
		cin>>a[k];
int b[a[k]];
b[0]=1;
b[1]=1;
		for(x=2;x<a[k];x=x+1)
		{
			b[x]=b[x-1]+b[x-2];

			}
		sum[k]=b[a[k]-1];
	}
	for(k=0;k<n;k=k+1)
		cout<<sum[k]<<endl;
	return 0;






}