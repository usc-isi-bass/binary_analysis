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
	int k,i=0;
	scanf("%d",&k);
	for(i=1;i<=k;i++){
		int n,m;
		scanf("%d",&n);
		double jfc[100];
		double sum=0.0;
		for(m=0;m<=n-1;m++){
			scanf("%lf",&(jfc[m]));
			sum=sum+jfc[m];
		}
		double pj,bzc=0.0,fc;
		pj=sum/(double)n;
		for(m=0;m<=n-1;m++){
			bzc=bzc+pow(jfc[m]-pj,2);
		}
		fc=sqrt(bzc/(double)n);
		printf("%.5f\n",fc);
	}
	return 0;
}