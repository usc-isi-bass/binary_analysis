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
    char sen[MAX][MAX]={0};
	int i,e;
    for(i=0;i<MAX;i++){
		scanf("%s",sen[i]);
	}
	printf("%s",sen[0]);
	for(i=1;sen[i][0];i++){
		printf(" %s",sen[i]);
	}
	return 0;
}