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
	char zfc[1000][256];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;zfc[i][j]!='\0';j++){
			if(zfc[i][j]=='A'){
				zfc[i][j]='T';
			}
			else
				if(zfc[i][j]=='T'){
				zfc[i][j]='A';
			}
			else
				if(zfc[i][j]=='G'){
				zfc[i][j]='C';
			}
			else
				if(zfc[i][j]=='C'){
				zfc[i][j]='G';
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;zfc[i][j]!='\0';j++){
			printf("%c",zfc[i][j]);
		}
			if(zfc[i][j]=='\0'){
			printf("\n");
			}
	}


	return 0;
}



