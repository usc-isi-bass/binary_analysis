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
	int c[100][100];
	int a;
	int i, j;
	int a1, b1, a2, b2;
	scanf("%d", &a);
	for (i = 0; i < a; i ++)
		for (j = 0; j < a; j ++){
			scanf("%d", &c[i][j]);
		}
	i=0;
	for (i = 0; i < a; i ++){
		for (j = 0; j < a; j ++){
			if (c[i][j] == 0){
				if (c[i+1][j] == 0 && c[i][j+1] == 0){
					a1 = i; b1 = j;
				}
				if (c[i-1][j] == 0 && c[i][j-1] == 0){
					a2 = i; b2 = j;
				}
			}
		}
	}
	printf("%d\n", (a2-a1-1)*(b2-b1-1));
	return 0;
}