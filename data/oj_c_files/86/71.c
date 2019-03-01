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
	int N,i,j;
	int n,t,p,c;
	scanf ("%d",&N);
	for (i=0;i<N;i++)
	{
		scanf ("%d",&n);
		t = c =0;
		for (j=1;j<=n;j++)
		{
			scanf ("%d",&p);
			if (t<60)
			{
				c = p;
			    t = c+j*3;
			}
		}
		if (t>63)  c = c - (t-63);
		else if (t<60) c = c + 60 - t;
		printf ("%d\n",c);
	}
	

	return 0;
}
