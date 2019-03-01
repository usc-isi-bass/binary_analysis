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
	char str[101];
	int len,i,u;
	gets(str);
	len=strlen(str);
	for(i=len-1;i>0;i--){
		if(str[i]==' '&&str[i-1]==' '){
			for(u=i;u<=len;u++){
				str[u]=str[u+1];
			}
		}
	}
	puts(str);
	return 0;
}