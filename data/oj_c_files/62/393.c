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
    char w[300];
	int a,b,n,i,j;
	gets(w);
	printf("%c",w[0]);
	for(i=1;w[i]!='\0';i++){
		if((w[i-1]==' ')&&(w[i]==' ')){
			
		}else{
			printf("%c",w[i]);
		}
	}
    return 0;
}