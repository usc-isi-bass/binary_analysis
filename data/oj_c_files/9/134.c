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
	int age[N], n, i, k;
	char id[N][LEN];
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%s %d", id[i], &(age[i]));
	}
         int e; char e_id[LEN];
         for(k = 1 ; k <= n; k++){
	for(i = 0; i < n- k; i++){
		if((age[i]<age[i+1]&&age[i]>=60)||(age[i]<60&&age[i+1]>=60)){
			e = age[i+1];
			strcpy(e_id, id[i+1]);
			age[i+1] = age[i];
			strcpy(id[i+1], id[i]);
			age[i] = e;
			strcpy(id[i], e_id);
		}
	}
}

	

	for(i = 0; i < n; i++){
		printf("%s\n", id[i]);
	}
	return 0;
}