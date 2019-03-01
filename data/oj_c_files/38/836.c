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
	int n,i=0,j=0,k=0,s=0,m=0;
	double an[100]; 
	double sum,jz;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		sum=jz=0.0;
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%lf",&an[j]);
			sum+=an[j];
		}
		sum/=m;
		for(j=0;j<m;j++){
			jz+=(an[j]-sum)*(an[j]-sum);
		}
		jz=jz/m;
		printf("%.5lf\n",sqrt(jz));
	}
	return 0;
}