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
	int i,j,l,k;
	char s[MAX+1];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++){
		for(j=0;j<l-1;j++){
			if((s[j]==32)&&(s[j+1]==32)){
				for(k=(j+1);k<l;k++){
					s[k]=s[k+1];
				}
			}
		}
	}
	puts(s);
	return 0;
}