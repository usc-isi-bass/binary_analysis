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
	int i,k,n;
	int len;
    char str[50][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		len=strlen(str[i]);
	for(k=0;k<len;k++){
		if(str[i][len-1]=='g'){
			str[i][len-3]='\0';
		}
		else{
			str[i][len-2]='\0';
		}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);
	}
		return 0;
	}