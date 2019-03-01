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




int main(){

	char danCi[N][LEN];

	int n, i, len;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%s", danCi[i]);
	}

	for(i = 0; i < n; i++){
		len = strlen(danCi[i]);

		if((danCi[i][len - 1] == 'r') || (danCi[i][len - 1] == 'y')){
			danCi[i][len - 2] = 0;
		}else{
			danCi[i][len - 3] = 0;
		}

	}

	for(i = 0; i < n; i++){
		printf("%s\n", danCi[i]);
	}
	
	return 0;
}