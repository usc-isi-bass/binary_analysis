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
	int n,i,j;
	double x[100],s,m=0.0,s1,k,S;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		m=0;s1=0;s=0;S=0;
		scanf("%lf",&k);
        for(j=0;j<k;j++){
		    scanf("%lf",&x[j]);
		    m+=x[j]/k;}
		for(j=0;j<k;j++){
			s+=pow(x[j]-m,2);
			s1=s/k;}
		S=sqrt(s1);
		printf("%.5lf\n",S);
	}
	return 0;
}
