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
	char sz[3000];
        gets(sz);
	int jishu,i;
	jishu=0;
	int num=strlen(sz);
	for(i=0;;i++){
	    if(sz[i]!=32&&sz[i]!='\0')
			jishu++;
		else if(sz[i]==32&&jishu!=0){
			printf("%d,",jishu);
			jishu=0;}
		if(sz[i]=='\0'&&jishu!=0){
			printf("%d",jishu);
			break;
	}}
	return 0;
}
