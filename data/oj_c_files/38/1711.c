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

	double shuJu[N];

	double a, s[K];

	int k, n, i, j;

	scanf("%d", &k);

	for(i = 0; i < k; i++){
		scanf("%d", &n);

		for(j = 0; j < n; j++){
			scanf("%lf", &(shuJu[j]));
		}

		a = 0;

		for(j = 0; j < n; j++){
			a += shuJu[j];
		}

		a = a/n;

		s[i] = 0;
		for(j = 0; j < n; j++){
			s[i] += (shuJu[j] - a)*(shuJu[j] - a);
		}

		s[i] /= n;
		
		s[i] = sqrt(s[i]);

	}

	for(i = 0; i < k; i++){
		printf("%.5lf\n", s[i]);
	}



	return 0;
}