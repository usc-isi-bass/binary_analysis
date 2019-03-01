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
	int i,a;
	char b=32;
	char sz[10000],res[10000];
	gets(sz);
	a=strlen(sz);
	for(i=0;i<a;i++){
		if(sz[i]!=32){
			printf("%c",sz[i]);
		}else if(sz[i]==32&&sz[i-1]!=32){
			printf("%c",b);
		}
	}
	return 0;
}