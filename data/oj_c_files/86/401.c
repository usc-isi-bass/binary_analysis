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
	int n, m, i, j, a[20], c, b[20], d=0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &m);
		c = 0;
		for(j = 0; j < m; j++){
			scanf("%d", &a[j]);
			if(a[j] + (3 * j) < 59){
				c++;
				d = 0;
			}
			else if(a[j] + (3 * j)== 59){
				d = 1;
			}	
		}
		b[i] = 60 - (c * 3) - d;
	}
	for(i = 0; i < n; i++){
		printf("%d\n", b[i]);
	}
	return 0;
}