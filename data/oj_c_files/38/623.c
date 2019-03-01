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
	int k,n,i,a;
	double sz[1000][100],pj,s=0;
	scanf("%d",&k);
	for(a=0;a<k;a++){
		s=0;
		pj=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lf",&sz[a][i]);
			pj+=sz[a][i];
		}
		pj=pj/n;
		for(i=0;i<n;i++){
			s+=(sz[a][i]-pj)*(sz[a][i]-pj);
		}
		s=sqrt(s/n);
		printf("%.5lf\n",s);
	}
	return 0;
}