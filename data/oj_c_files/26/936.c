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
	int i,j;
	char za[101];
	gets(za);
	
	for(i=1;za[i];){
		if(za[i]==' '&&za[i+1]==' '){
			for(j=i;za[j];j++){
				za[j]=za[j+1];
			}
		}else{
			i++;
		}
	}
	puts(za);
	return 0;
}