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
    int i,j,n;                 
	char zfc[256],jg[256];
    scanf("%d", &n);             
    for (i = 0; i < n; i++) {   
        scanf("%s", zfc); 
			for (j = 0; zfc[j]!='\0'; j++){
			 if (zfc[j]=='A'){
				 jg[j]='T';
			 } else if(zfc[j]=='T'){
				 jg[j]='A';
			 } else if(zfc[j]=='C'){
				 jg[j]='G';
			 } else {
				 jg[j]='C';
			 } 
			}
			jg[j]='\0';
			printf("%s\n",jg);
		 }
  
    return 0;
}

