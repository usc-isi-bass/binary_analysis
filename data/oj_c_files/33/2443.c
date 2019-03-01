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
	int n,a,b,c,d,e,f,i,j;
    char sz[1000][500];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sz[i]);
		for(j=0;j<strlen(sz[i]);j++){
			if(sz[i][j]=='A'){
				printf("T");
			}else if(sz[i][j]=='G'){
				printf("C");
			}else if(sz[i][j]=='T'){
				printf("A");
			}else if(sz[i][j]=='C'){
				printf("G");
			}	
		}
		printf("\n");
	}

	return 0;
}
