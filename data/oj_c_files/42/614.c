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

void main ()
{
	int n,a[100000],m,i,k=0;
	int *p,*q;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	scanf ("%d",&a[i]);
	scanf ("%d",&m);
	for (p=a;p<a+n-k;p++)
	{
		if (*p==m)
		{
			k++;
			for (q=p;q<a+n-k;q++)
			{
				*q=*(q+1);
			}
			p--;
		}
	}
	for (i=0;i<n-k-1;i++)
	{
		printf ("%d ",a[i]);
	}
	printf ("%d",a[i]);
}