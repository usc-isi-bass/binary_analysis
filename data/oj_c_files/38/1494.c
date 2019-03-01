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
	int k,i;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int n;
		scanf("%d",&n);
		int j;
		double a=0.0,s=0.0,sz[100];
		double *p;
		for(j=0,p=sz;j<n;j++,p++){
			scanf("%lf",p);
			a+=*p;
		}
		a=a/n;
		for(j=0,p=sz;j<n;j++,p++){
			s+=(*p-a)*(*p-a);
		}
		s=sqrt(s/n);
		printf("%.5f\n",s);
	}
	return 0;
}