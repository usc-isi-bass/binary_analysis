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

	int n, i, k;

	char id[N][LEN];

	int  age[N];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%s %d", id[i], &(age[i]));
	}

	int e_age;
	char e_id[LEN];
	for(k = 1 ; k <= n ; k++){
		for(int i = 0; i < n - k; i++){
			if( (age[i] < age[i+1]) && !(age[i+1] < 60) ){
				e_age = age[i+1];
				strcpy(e_id, id[i+1]);
				age[i+1] = age[i];
				strcpy(id[i+1], id[i]);
				age[i] = e_age;
				strcpy(id[i], e_id);
			}
		}
	}

	for(i = 0; i < n; i++){
		printf("%s\n", id[i]);
	}


	return 0;
}