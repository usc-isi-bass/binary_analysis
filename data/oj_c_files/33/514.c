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

char pd(char x);
int main(){
	int i,j,n,m;
	char dui;
	char jianji[256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",jianji);
		m=strlen(jianji);
		for(j=0;j<m;j++){
			dui=pd(jianji[j]);
			printf("%c",dui);
		}
		if(i<n-1){
			printf("\n");
		}
	}
	return 0;
}

char pd(char x){
	char dy;
	if(x=='A'){
		dy='T';
	}
	if(x=='T'){
		dy='A';
	}
	if(x=='C'){
		dy='G';
	}
	if(x=='G'){
		dy='C';
	}
	return dy;
}
