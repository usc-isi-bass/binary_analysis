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
	int i,j,n,m;
	double a=1,sum[100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			a=1/a+1;
			sum[i]=sum[i]+a;	
		}
                    a=1;
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",sum[i]);
	}
	return 0;
}
