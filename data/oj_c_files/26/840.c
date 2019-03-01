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
	char sentence[101],result[101];
	gets(sentence);
	int l;
	l=strlen(sentence);
	int i,j=0;
	for(i=0;i<l;i++){
		while(sentence[i]==' '&&sentence[i+1]==' '){
			i++;
		}
		result[j]=sentence[i];
		j++;
		if(i==l-1){
		result[j]='\0';

		}
	}
	int n=strlen(result);
	for(i=0;i<n;i++){
	printf("%c",result[i]);
	}
	
	return 0;
}