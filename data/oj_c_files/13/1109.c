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

int main ()
{
	int i, n, t, p;
	int a[20000];
	scanf("%d", &n);
	for (i=0; i<n; i++) 
		scanf("%d", &a[i]);
	printf("%d", a[0]);
	for (i=1; i<n; i++) {
		p=0;
		t=0;
		do {
			if (a[i]==a[p]) 
				t=1;
			p+=1;
		}
		while (t==0&&p<i);
		if (t==0)
			printf(" %d", a[i]);
	}
	return 0;
}