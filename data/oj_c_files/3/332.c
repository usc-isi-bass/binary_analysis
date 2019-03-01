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

void main()
{
	int x[1000],y[1000],n,k,i,j,he,z=0;
	scanf ("%d%d",&n,&k);
	for (i=0;i<n;i++)
	{
		scanf ("%d",&x[i]);
		y[i]=x[i];
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			he=x[i]+y[j];
			if (he==k) z+=1;
			else z+=0;
		}
	}
if (z>0) printf("yes");
else printf ("no");
}