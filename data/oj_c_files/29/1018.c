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


int main(void){
	int m;
	scanf("%d", &m);
	while(m--){
		int n, i;
		double res = 0;
		double temp1 = 1.0, temp2 = 2.0;
		scanf("%d", &n);
		for(i = 0; i < n; ++i){
			res = res + temp2/temp1;
			temp2 += temp1;
			temp1 = temp2 - temp1;
		}
		printf("%.3lf\n", res);
	}
}