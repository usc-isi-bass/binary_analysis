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
    int i,n,LEN;
	char zfc[51];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zfc);
		LEN=strlen(zfc);
		switch(zfc[LEN-1]){
		case 'r': zfc[LEN-2]='\0';break;
		case 'y': zfc[LEN-2]='\0';break;
		case 'g': zfc[LEN-3]='\0';break;
		}
		printf("%s\n",zfc);
	}
	return 0;
}