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
int n,i,k;
char sz[500];
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%s",sz);
	for(k=0;sz[k]!='\0';k++){
		if(sz[k]=='A'){
			sz[k]='T';
		}else if(sz[k]=='T'){
			sz[k]='A';
		}else if(sz[k]=='G'){
			sz[k]='C';
		}else if(sz[k]=='C'){
			sz[k]='G';	
		}
	}
	sz[k]='\0';
	printf("%s\n",sz);
}
	return 0;
}
