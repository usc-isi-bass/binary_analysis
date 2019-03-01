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

int main(){
	int n, m, j, a, b;
	double sz[100], sum;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		sum=0;
		a=1;
		b=2;
		scanf("%d", &m);
		for(j=0; j<m; j++){
			sz[j]=1.0*b/a;
			b=b+a;
			a=b-a;
			sum=sum+sz[j];
		}
		printf("%.3f\n", sum);
	}
	return 0;
}