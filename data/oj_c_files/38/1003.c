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
	int k,n;
	int i,j;
	double sum,a,s,S;
	double sz[100];
	double* p=sz;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		sum=0;
		s=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",p+j);
			sum=sum+*(p+j);
		}
		a=sum/n;
		for(j=0;j<n;j++){
			s=s+(*(p+j)-a)*(*(p+j)-a);
		}
		S=sqrt(s/n);
		printf("%.5lf\n",S);
	}
	return 0;
}
