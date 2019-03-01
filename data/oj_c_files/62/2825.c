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
	int i,n,l;
	char a[50];
	gets(a);
	l=strlen(a);
	for(n=0;n<l;n++){
		if(a[n]=='\t') 
			a[n]=' ';
	}
    for(i=l;i>0;i--){ 
		if((a[i-1]==' ')&&(a[i]==' ')) 
			strcpy(&a[i-1],&a[i]);
	}
	puts(a);
	return 0;
}