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
	int n,i,j,e;
	char jianji[256]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",jianji);
		e=strlen(jianji);
		for(j=0;j<e;j++){
			if(jianji[j]=='A'){
				printf("T");
			}else if(jianji[j]=='G'){
				printf("C");
			}else if(jianji[j]=='C'){
				printf("G");
			}else{
				printf("A");
			}
		}
		printf("\n");
	}
	return 0;
}

