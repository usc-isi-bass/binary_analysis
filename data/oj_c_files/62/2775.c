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

int main (){
	int k,i,j,c;
	char w[100];
    gets(w);
    c=strlen(w);
    k=0;
	for(i=0;i<c;i++){
		if(w[i]==' '){
			for(j=i+1;w[j]==' ';j++){
				for(k=j;k<c;k++) 
				  w[k]=w[k+1];
				j--;
				
			}
		j=0;
		}

	}
    
printf("%s",w);
	return 0;
}