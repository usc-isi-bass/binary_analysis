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
    char zfc[10005];
	gets(zfc);
	int i,l;
	l=strlen(zfc);
	for(i=0;i<l;i++){
		if(zfc[i]!=' '||(zfc[i]==' '&&zfc[i-1]!=' ')){
			printf("%c",zfc[i]);
		}
	}
	return 0;
}  