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
	int i,a;
	char z[300];
	gets(z);
	a=strlen(z);
    for(i=0;i<a;i++){
		
		if(z[i]!=' '){
			printf("%c",z[i]);
			continue;
		}
		if(z[i]==' '&&z[i+1]!=' '){
			printf("%c",z[i]);
			continue;
		}
	}
    return 0;
}
