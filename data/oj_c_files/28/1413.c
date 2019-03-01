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
	char zfc[10000];
	gets(zfc);
	int count=0;
	int len;
	len=strlen(zfc);
	for(int i=0;i<=len;i++){
		if(zfc[i]!=' '){
			count++;
		}
		if(zfc[i]==' '&&zfc[i-1]!=' '){
			printf("%d,",count);
			count=0;
		}
		if(zfc[i]=='\0'&&zfc[i-1]!=' '){
			printf("%d",count-1);
		}
	}return 0;
}
