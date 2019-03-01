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
	int a;
	int b;
	int n;
	int m;
	int t;
	double sum;
	scanf("%d", &n);
	while(n--) {
		scanf("%d",&m);
		a=2;
		b=1;
		sum=0;
		while(m--) {
			sum+=a*1.0/b;
			t=a;
			a=a+b;
			b=t;
		}
		printf("%.3lf\n", sum);
	}
	return 0;
}

