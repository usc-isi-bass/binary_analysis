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
	char s[101],modified[101];
	int i,j;
	gets(s);
	j=0;
	for(i=0;i<strlen(s)-1;i++){
		if(s[i]!=' '||(s[i]==' '&&s[i+1]!=' ')){
			modified[j]=s[i];
			j++;		
		}
	}
	if(s[strlen(s)-1]!=' '){
		modified[j]=s[strlen(s)-1];
		modified[j+1]=0;
	}else
		modified[j]=0;
	printf("%s\n",modified);
	return 0;
}