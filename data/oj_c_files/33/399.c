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
	int m,i,t,k;
	char dna[256];
	scanf("%d\n",&m);
	for(i=0;i<m;i++){	
		scanf("%s",dna);
		t=strlen(dna);
		for(k=0;k<t;k++){
			if(dna[k]=='A'){dna[k]='T';}
			else if(dna[k]=='T'){dna[k]='A';}
			else if(dna[k]=='C'){dna[k]='G';}
			else if(dna[k]=='G'){dna[k]='C';}
	}
		for(k=0;k<t;k++){
			if(k==t-1){printf("%c\n",dna[k]);}
			else{printf("%c",dna[k]);}
		}
	}
	return 0;
}
