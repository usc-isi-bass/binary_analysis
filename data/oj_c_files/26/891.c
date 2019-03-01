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
	char jz[102];
	int i;
	gets(jz);
	for(i=0;jz[i]!='\0';i++){
        if(jz[i]==' '&&jz[i+1]!=' '||jz[i]!=' '){
			printf("%c",jz[i]);
		}
	}
	return 0;
}