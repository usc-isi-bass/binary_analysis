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
	char zfc[250];
	gets(zfc);
	int n=strlen(zfc);
	for(int i=0;i<n;i++){
		if(i==0){
			printf("%c",zfc[0]);
		}else if(zfc[i]!=' '){
			printf("%c",zfc[i]);
		}else if(zfc[i-1]!=' '){
			printf("%c",zfc[i]);
		}
	}
	return 0;
}