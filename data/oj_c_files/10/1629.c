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

int l,n;
int a[30];
void measure( int k,int s,int m)
{
	int i;
	if (k==n){if (s>l)l=s;}
	else {
			for (i=k+1;i<=n;i++)
				if (a[i-1]<=m)
					measure(i,s+1,a[i-1]);
			measure(n,s,m);
		}
}

void main()
{ 
	int i;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	measure(0,0,10000);
	printf("%d\n",l);
}