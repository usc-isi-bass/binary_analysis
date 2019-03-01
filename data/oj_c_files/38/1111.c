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
	int n, m;
	int i, j;
	scanf("%d", &n);
	double x[1000], a=0;
	double b=0, s;
	for(i=0;i<n;i++){
		scanf("%d", &m);
		a=0;
		b=0;
		for(j=0;j<m;j++){
		scanf("%lf", &x[j]);
		a+=x[j];}
		for(j=0;j<m;j++){
			b+=pow((x[j]-a/m),2);}
		s=pow((b/m),0.5);
        printf("%.5lf\n", s);
	}

	return 0;
}