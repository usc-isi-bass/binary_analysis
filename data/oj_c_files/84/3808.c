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
	int i,j,k;
	int n;
	scanf("%d",&n);
	int list[n];

	for (i=0; i<n; i++) {
		scanf("%d",&list[i]);
	}

	for (j=n-2;j>=n-3;j--) {
		for (k=0;k<=j;k++) {
			if (list[k] > list[k+1]) {
				list[k]=list[k]+list[k+1];
				list[k+1]=list[k]-list[k+1];
				list[k]=list[k]-list[k+1];
			}
		}
	}
	printf("%d\n%d",list[n-1],list[n-2]);

	return 0;
}
