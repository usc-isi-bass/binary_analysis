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
	int n,i,k,p;
    double x[100][50],av[50],fangcha[50];
	
	scanf("%d",&k);
for(p=0;p<k;p++)
{
	av[p]=0;
	fangcha[p]=0;
scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&x[i][p]);
	av[p]+=x[i][p]/n;
	}
	for(i=0;i<n;i++)
	{
	fangcha[p]+=(x[i][p]-av[p])*(x[i][p]-av[p]);
	}
	fangcha[p]=sqrt(fangcha[p]/n);
}
for(p=0;p<k;p++)
{
	printf("%.5lf\n",fangcha[p]);
}
	return 0;
}
