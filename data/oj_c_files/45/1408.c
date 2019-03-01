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
	char s[51],w[51];
	char zfc[2][51];
	int i=0,j=0,n=0,m=0,k=0;
	for(k=0;k<2;k++){
		scanf("%s",zfc[k]);
	}
	strcpy(s,zfc[0]);
	strcpy(w,zfc[1]);
    n=strlen(s);
	for(i=0;w[i]!='\0';i++){
		if(w[i]==s[j]){
		
			if(memcmp(s,w+i,n)==0){
				m=i;
				break;
			}
		}
	}
	printf("%d",m);
	return 0;
}
