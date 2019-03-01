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
    int i,j,n,k;
	double x[100],*p,sum=0,s1=0,s2=0,ave;
	p=x;
	double sqrt(double x);
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&*(p+j));
			sum+=*(p+j);
		}
		ave=sum/(double)n;
		for(j=0;j<n;j++){
			s1+=(*(p+j)-ave)*(*(p+j)-ave);
		}
		s2=sqrt(s1/(double)n);
		printf("%.5lf\n",s2);
		sum=0;
		s1=0;
		s2=0;
	}
	return 0;
}

