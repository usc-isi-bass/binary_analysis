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
	char words[N][len];
	int n,i,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",words[i]);
		l=strlen(words[i]);
		if(words[i][l-1]=='r'||words[i][l-1]=='y'){
			words[i][l-2]=0;
			printf("%s\n",words[i]);
		}else{
			words[i][l-3]=0;
			printf("%s\n",words[i]);
		}
	}
	return 0;
}