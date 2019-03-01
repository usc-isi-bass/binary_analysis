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
	char zfc[210];
	gets(zfc);
	int len=strlen(zfc);
	for(int k=0;k<len-1;k++){
		if((zfc[k]!=32)||((zfc[k]==32)&&(zfc[k+1]!=32))){
			printf("%c",(zfc[k]));
		}
		else if((zfc[k]==32)&&(zfc[k+1]==32)){
			printf("%c",(zfc[k]));
			while(zfc[k]==32){
				k++;
			}
			k--;
		}
	}
	printf("%c",(zfc[len-1]));
	return 0;
}