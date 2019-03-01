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

char zfc[1000];
int main(){
	int len,sz[300]={0},i,k,cd[300];
	gets(zfc);
	len=strlen(zfc);
	for(i=0,k=1;i<len;i++){
		if(zfc[i-1]==' '&&zfc[i]!=' '){
			sz[k]=i;
			k++;
		}
	}
	for(i=0;i<len-1;i++){
		if(zfc[i]==' ')
			zfc[i]=0;
	}
	for(i=0;i<k-1;i++)
		printf("%d,",strlen(&zfc[sz[i]]));
	printf("%d",strlen(&zfc[sz[k-1]]));
	return 0;
}

