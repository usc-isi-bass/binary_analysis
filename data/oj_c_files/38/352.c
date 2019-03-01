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
    int i,j,m,n;
	double sqplus,plus,x,avr,outcome;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&m);
		sqplus=0;
		plus=0;
		avr=0;
		for (j=1;j<=m;j++)
		{
			scanf("%lf",&x);
			sqplus=sqplus+x*x;
			plus=plus+x;
		}
		avr=plus/m;
		outcome=sqplus-2*plus*avr+m*avr*avr;
		printf("%.5lf\n",sqrt(outcome/m));
	}
	return 0;
}