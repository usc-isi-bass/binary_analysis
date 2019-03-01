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
	char s[101];
	int i,k=0;
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=' '){
			s[k]=s[i];
			k++;
		}else if(s[i]==' '&&s[i-1]!=' '){
			s[k]=s[i];
			k++;
		}else if(s[i]==' '&&s[i-1]==' '){
			k+=0;
		}
	}
	s[k]='\0';
	puts(s);
	return 0;
}
