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
	int m,i,j,n[1000];
	double t,k,l;
	scanf("%d",&m);
	for(i=0;i<m;i++)scanf("%d",&n[i]);
    for(i=0;i<m;i++)
	{
		t=0;k=2;l=1;
		for(j=0;j<n[i];j++)
		{
			t=t+k/l;
			k=k+l;
			l=k-l;

		}
		printf("%.3lf\n",t);
	}
	return 0;
}
