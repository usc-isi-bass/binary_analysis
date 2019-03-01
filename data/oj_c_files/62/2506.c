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
    char z[1000];
	int i,j;
	gets(z);
	for(i=0;z[i];i++){
        if(z[i]==' '&&z[i+1]==' '){
			for(j=i;z[j];j++){
                z[j]=z[j+1];
			}
			i--;
		}
	}
	puts(z);
	return 0;
}

