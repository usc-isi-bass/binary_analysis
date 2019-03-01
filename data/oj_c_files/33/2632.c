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
	int i,j, n;
	char zfc[LEN][LEN];
	scanf("%d", &n);
	for(j=0;j<n;j++){
		scanf("%s", zfc[j]);
	}
	for(j=0;j<n;j++){
		for(i=0; zfc[j][i]!=0; i++) {
			switch(zfc[j][i]) {
			case 'A': 
				zfc[j][i] = 'T';
				break;
			case 'T':
				zfc[j][i] = 'A';
				break;
			case 'C': 
				zfc[j][i] = 'G';
				break;
			case 'G': 
				zfc[j][i] = 'C';
				break;
			}
		}
		printf("%s\n", zfc[j]);
	}
	return 0;
}