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
	int n;
	int a[100],c[100];
	int i,b;
	int x=0;
	int y=0;

	scanf ("%d", &n);
	for (i=0; i<n; i++) {
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++) {
		b=a[i];
		if (b>x) {
			x=b;
		}
	}
	for (i=0; i<n; i++) {
		if (a[i]!=x){
			c[i]=a[i];
		}
	}
	for (i=0; i<n; i++) {
		b=c[i];
		if (b>y) {
			y=b;
		}
	}
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}

