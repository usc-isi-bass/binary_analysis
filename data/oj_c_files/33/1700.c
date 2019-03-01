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
    int n,i,j;
	char sz[256];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%s",sz);
		for(j=0;sz[j];j++){
			if(sz[j]=='A'){
				sz[j]=sz[j]+19;
			}
			else if(sz[j]=='T'){
				sz[j]=sz[j]-19;
			}
			else if(sz[j]=='G'){
				sz[j]=sz[j]-4;
			}
			else if(sz[j]=='C'){
				sz[j]=sz[j]+4;
			}
		}
		printf("%s\n",sz);
	}
	return 0;
}
			
			

