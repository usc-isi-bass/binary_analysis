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


void main()
{
	int case_num,n;
	double *p,sumx2=0,sumx=0,a[1001],S;
	scanf("%d",&case_num);
	for(;case_num>0;case_num--){
		scanf("%d",&n);
		for(p=a;p<a+n;p++)
			scanf("%lf",p);
		for(p=a;p<a+n;p++){
			sumx+=*p;
			sumx2+=((*p)*(*p));
		}
		S=sqrt(sumx2/n-(sumx/n)*(sumx/n));
		printf("%.5f\n",S);
		sumx2=0;
		sumx=0;
	}

}
