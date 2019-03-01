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


int main() {
	
	int num[5][5], max[2][5], min[2][5];
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			scanf("%d", &num[i][j]);
		}
	}
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			max[0][i] = num[i][0];
			max[1][i] = 0;
			min[0][j] = num[0][j];
			min[1][i] = 0;
		}
	}

	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			if(num[i][j] > max[0][i]) {
				max[0][i] = num[i][j];
				max[1][i] = j;
			}
			if(num[i][j] < min[0][j]) {
				min[0][j] = num[i][j];
				min[1][j] = i;
			}
		}
	}

	int count = 0;
	for(int i=0; i<5; i++) {
		if(min[1][max[1][i]] == i) {
			if(count != 0) printf("\n");
			printf("%d %d %d", i+1, max[1][i]+1, max[0][i]);
			count ++;
		}
	}

	if(count == 0) {
		printf("not found");
	}
		return 0;

}
