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
	int a,b,c,n,i,s[10000]={0},z[10000]={0};
	scanf ("%d",&n);
	for (i=0;1;i++)
	{
		scanf ("%d %d",&a,&b);
		if (a==0&&b==0)
			break;
		s[a]=1;
		z[b]=z[b]+1;
	}
	for (i=0;i<n;i++)
	{
		if (s[i]==0)
			c=i;
	}
	if (z[c]==n-1)
		printf("%d\n",c);
	else 
		printf ("NOT FOUND");
	return 0;
}