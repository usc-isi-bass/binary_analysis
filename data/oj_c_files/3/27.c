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
	int n, k, i, j, num[1000];
	scanf("%d %d", &n, &k);
	for(i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(num[i] + num[j] == k){
				n = 0;
				break;
			}
		}
		if(n == 0){
			printf("yes\n");
			break;
		}
	}
	if(n != 0){
		printf("no\n");
	}
	return 0;
}
