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
	char dna1[1000][256];
	char dna2[1000][256];
	int k,i;
	int n;
	scanf("%d\n",&n);
	for(k=0;k<n;k++){
		gets(dna1[k]);
		for(i=0;dna1[k][i]!='\0';i++){
			if(dna1[k][i]=='A'){
				dna2[k][i]='T';
			}if(dna1[k][i]=='T'){
				dna2[k][i]='A';
			}if(dna1[k][i]=='G'){
				dna2[k][i]='C';
			}if(dna1[k][i]=='C'){
				dna2[k][i]='G';
			}
		}
		dna2[k][i]='\0';
	}

	for(k=0;k<n;k++){
			puts(dna2[k]);
	}
	return 0;
}
