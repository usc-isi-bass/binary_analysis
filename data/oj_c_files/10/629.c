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
	int s[25],i,j,a[25],n,max;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		s[i]=1;
		max=0;
		for (j=0;j<i;j++)
			if (a[j]>=a[i]&&s[j]>max) max=s[j];
		s[i]+=max;
	}
	max=0;
	for (i=0;i<n;i++)
		if (max<s[i]) max=s[i];
	cout<<max;
	return 0;
}

