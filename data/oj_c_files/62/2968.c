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
	int j,i,n;
    char s[380];
	gets(s);
    printf("%c",s[0]);
	for(i=1;s[i];i++){
		if(s[i-1]==' '&&s[i]==' '){
			continue;
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;
}