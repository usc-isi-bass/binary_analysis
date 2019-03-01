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
	double fz[10000],fm[10000],s;
	fz[0]=2;
	fm[0]=1;
	s=fz[0]/fm[0];
	int n,gs,j,i=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&gs);
		for(j=1;j<gs;j++)
		{
			fz[j]=fz[j-1]+fm[j-1];
			fm[j]=fz[j-1];
			s+=(fz[j]/fm[j]);
		}
		printf("%.3lf\n",s);
		i++;
		s=fz[0]/fm[0];
	}
	return 0;
}