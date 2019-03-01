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
	gets(s);
	int i,j;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=' '){
		printf("%c",s[i]);
		}else{
			printf(" ");
            for(j=i;s[j]==' ';j++){
				i=j;
			}
		}
	}
	return 0;
}