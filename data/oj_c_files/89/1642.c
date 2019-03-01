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



int sum[M][2];

int main()
{
    int n, i,j;
    scanf("%d", &n);
    while (scanf("%d%d", &i, &j)!=EOF) {
	sum[i][0] ++;
	sum[j][1] ++;
    }
    for (i=0; i<n; i++) {
	if (sum[i][1] - sum[i][0] == n-1) {
	    printf("%d\n", i);
	    return 0;
	}
    }
    /* not found */
    printf("NOT FOUND\n");
    return 0;
}
