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
	char x[2],word[32];
	int i,j,k,len,n;
	gets(x);
	n=atoi(x);
	for (i=0;i<n;i++){
		gets(word);
		len=strlen(word);
		if(word[len-1]=='g'){
			for(j=0;j<len-3;j++)
				printf("%c",word[j]);
			printf("\n");
		}
		else {
			for (k=0;k<len-2;k++)
				printf("%c",word[k]);
			printf("\n");
		}
	}
	return 0;
}