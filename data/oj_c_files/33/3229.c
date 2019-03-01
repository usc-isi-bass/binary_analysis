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
	int i, n, j;
	scanf("%d", &n);
	for (i=0;i<n;i++){
		 char zifu[MAX+1];
	     scanf("%s", &zifu);
	     for(j=0;zifu[j];j++){
			 if(zifu[j]=='A'){
				 zifu[j]='T';
			 }
			 else if(zifu[j]=='G'){
				 zifu[j]='C';
			 }
			 else if(zifu[j]=='C'){
				 zifu[j]='G';
			 }
			 else if(zifu[j]=='T'){
				 zifu[j]='A';
			 }
		 }
		 if(!(zifu[j])){
		 printf("%s\n", zifu);
		 }
	}
	return 0;
}