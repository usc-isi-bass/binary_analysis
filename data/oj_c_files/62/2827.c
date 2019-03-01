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
	int i,s1[10000];
	char s[10000];
	gets(s);
	for(i=0;s[i];i++){
		s1[i]=0;
		if(s[i]==' '&&s[i+1]==' '){
			s1[i]=0;
		}else{
			s1[i]=1;
		}
	}
	for(i=0;s[i];i++){
		if(s1[i]==1){
			printf("%c",s[i]);
		}
	}
	return 0;
}