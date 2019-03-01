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

double nums[100];

int main() {
	int k;
	scanf("%d", &k);
	
	int i;
	for (i = 0; i < k; i++) {
		int n;
		scanf("%d", &n);
		int j;
		double sum = 0.0;
		for (j = 0; j < n; j++) {
			scanf("%lf", nums + j);
			sum += *(nums + j);
		}
		
		double avg = sum / n;
		double s = 0;
		for (j = 0; j < n; j++) {
			double num = *(nums + j);
			s += (num - avg)*(num - avg);
		}
		s /= n;
		s = sqrt(s);
		
		printf("%.5lf\n", s);
	}
}