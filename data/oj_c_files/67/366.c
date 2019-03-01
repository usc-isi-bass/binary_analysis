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
	int n, i, j, a[100][2];
	double p0, p;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<2; j++){
			scanf("%d", &a[i][j]);
			p0 = (double)a[0][1] / a[0][0];
		}
	}

    for(i=1; i<n; i++){
			p = (double)a[i][1] / a[i][0];
			if((p-p0) > 0.05){
				printf("better\n");
			}
			else if((p0-p) > 0.05){
				printf("worse\n");
			}
			else{
				printf("same\n");
			}
	}

	return 0;
}
