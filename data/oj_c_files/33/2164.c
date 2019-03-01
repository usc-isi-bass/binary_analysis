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
	int n,i,len[1000],j;
	char sz[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sz[i]);
		len[i]=strlen(sz[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<len[i];j++){
			if(sz[i][j]=='A'){
				sz[i][j]='T';
			}
			else if(sz[i][j]=='T'){
				sz[i][j]='A';
			}
			else if(sz[i][j]=='C'){
				sz[i][j]='G';
			}
			else if(sz[i][j]=='G'){
				sz[i][j]='C';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",sz[i]);
	}
	return 0;
}
