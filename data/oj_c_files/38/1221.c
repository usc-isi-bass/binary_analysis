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

int main(int argc, char* argv[])
{
	int k,n[150],i,j,m,e;
	scanf("%d",&k);
	double x[2000],a[150],S[150],l[150],s[150];
	for(i=1;i<=k;i++)
	{
		s[i]=0;l[i]=0;
		scanf("%d",&n[i]);
		for(j=1;j<=n[i];j++)
		{
			scanf("%lf",&x[j]);
		}
		for(m=1;m<=n[i];m++)
		{
			l[i]=l[i]+x[m];
		}
		a[i]=l[i]/n[i];
		for(e=1;e<=n[i];e++)
		{
			s[i]=s[i]+pow((x[e]-a[i]),2);
		}
		S[i]=sqrt(s[i]/n[i]);
	}
	for(i=1;i<=k;i++)
	{
		printf("%.5lf\n",S[i]);
	}
	return 0;
}