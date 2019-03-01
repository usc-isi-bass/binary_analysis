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


void sum(int n) {
	int front=1;
	int temp;
	int top=2, bottom=1;
	double sum=0;
	int i;
	for (i=0; i<n; i++) {
		sum+=(double)top/front;
		temp=top;
		top+=front;
		front=temp;
	}
	printf("%.3lf\n",sum);
}

int main()
{
	int m, n;
	scanf("%d",&m);
	int i;

	for (i=0; i<m; i++) {
		scanf("%d",&n);
		sum(n);
	}
	return 0;
}
