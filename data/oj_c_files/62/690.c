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
	char x[100];
	char y[100];
	int i,k,t;
	gets(x);
	k=0;
	t=strlen(x);
	for(i=0;i<t;i++){
		if(x[i]!=' '){
			y[k]=x[i];
			k=k+1;
		}
		if(x[i]==' '&&x[i+1]!=' '){
			y[k]=x[i];
			k=k+1;
		}
	}
	y[k]='\0';
	puts(y);
	return 0;
}
