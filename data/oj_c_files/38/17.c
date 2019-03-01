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
	double sum;
	double sum2;
	double input;
	int n, k;
	int in;
	
	scanf("%d", &k);
	for(; k>0; k--){
		scanf("%d", &n);
		sum = sum2 = 0;
		for(in=0; in<n; in++){
			scanf("%lf", &input);
			sum += input;
			sum2 += input * input;
		}
		printf("%.5f\n", sqrt((sum2-sum*sum/n)/n));
	}

	return 0;
}
