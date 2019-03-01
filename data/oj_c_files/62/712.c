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
	char zfc[256],str[256]={0};
	gets(zfc);
	int len=strlen(zfc),k=0;
	for(int i=0;i<len;i++){
		if(zfc[i]==' '&&zfc[i+1]==' '){
			continue;
		}else{
			str[k]=zfc[i];
			k++;
		}
	}
	puts(str);
	return 0;
}