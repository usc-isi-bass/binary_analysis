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
	int n,i,k,l;
	char zfc[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
        l=strlen(zfc[i]);
		for(k=0;k<l;k++){
		
			if(zfc[i][k]=='A'){
			zfc[i][k]='T';
		}
		else if(zfc[i][k]=='C'){
			zfc[i][k]='G';
		}
		else if(zfc[i][k]=='G'){
			zfc[i][k]='C';
			
		}
		else{
			zfc[i][k]='A';
		}
		}
		printf("%s\n",zfc[i]);
	}
		return 0;
}