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

void main(){
	int i,j;
	char some[30][30],it[30];
	for(i=0;i<30;i++){
		scanf("%s",&some[i]);
		scanf("%c",&it[i]);
		if(it[i]=='\n')
			break;
	}
	for(j=0;j<=i;j++){
		printf("%s",some[i-j]);
		if(j!=i)
			printf(" ");
	}
}