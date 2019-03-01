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
	int i,j,k,l;
	j=0;
	gets(zfc);
	l=0;
	for(i=0;i<strlen(zfc);i++){
		if(zfc[i]==' '&&zfc[i-1]!=' ') l++;
	}
	for(i=0;i<=strlen(zfc);i++){
		if((zfc[i]==' '&&zfc[i-1]!=' ')||i==strlen(zfc)){
			printf("%d",j);
			j=0;
			l--;
			if(l>=0) printf(",");
		}
		if(zfc[i]!=' ') j++;
	}
	scanf("%s",zfc);
	return 0;
}