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
	int a[16],i,j,s,n;
	for (; ;)
	{
		for (i=0;i<=15;i++) a[i]=0;
		for (i=0;i<=15;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]==0) break;
		if (a[i]==-1) return 0;
	}
	n=i;
	s=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			if (a[j]==2*a[i]) s=s+1;
	}
	printf("%d\n",s);
	}
	return 0;
}
