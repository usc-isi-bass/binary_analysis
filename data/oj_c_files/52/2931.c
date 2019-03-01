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
	int n,t,m,a[200],i,j,k;
	cin>>n>>m;
	for (i=0;i<n;i++)
		cin>>a[i];
	while (m>0)
	{
		t=a[n-1];
		for (j=n-1;j>0;j--)
			a[j]=a[j-1];
		a[0]=t;m--;
	}
	cout<<a[0];
	for (k=1;k<n;k++)
		cout<<" "<<a[k];
	return 0;
}
