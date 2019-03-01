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
	int i,j;
	int point[number][number];
	int n,s,sum,result;
	int a,b;
	scanf ("%d", &n);
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			scanf ("%d", &point[i][j]);
		}
	}
	for (i=0; i<n;) {
		for (j=0; j<n; j++) {
			if (point[i][j]==0) {
				a=a+1;
			}
		}
		if (a!=0) break;
		else i++;
	}
	for (j=0; j<n;) {
		for (i=0; i<n; i++) {
			if (point[i][j]==0) {
				b=b+1;
			}
		}
		if (b!=0) break;
		else j++;
	}
	sum=2*(a+b-2);
	s=a*b;
	result=s-sum;
	printf ("%d\n", result);
	return 0;
}