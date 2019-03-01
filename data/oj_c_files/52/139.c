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
	int n, m, i, j, temp;
	int * array;
	scanf("%d %d", &n, &m);
	array = (int *)malloc(sizeof(int)*n);
	for (i=0; i<n; i++) {
		scanf("%d", &array[i]);
	}
	m = m % n;
	for (i=0; i<m; i++) {	
		temp = *(array+(n-1));
		for (j=n-1; j>0; j--) {
			*(array+j) = *(array+(j-1));
		}
		*(array+0) = temp;
	}
	for (i=0; i<n-1; i++) {
		printf("%d ", *(array+i));
	}
	printf("%d\n", *(array+i));
	free(array);
	return 0;
}
