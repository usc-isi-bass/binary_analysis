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
	char s[50],w[50];
	int i,j,k,m;
    scanf("%s%s",s,w);
    m=strlen(s)+1;
	char *n;
	n=(char*)malloc(sizeof(char)*m);

    for(i=0;i<strlen(w);i++){
		if(w[i]==s[0]){
			for(k=0,j=i;j-i<strlen(s);j++,k++)
				n[k]=w[j];
			
			int result=strcmp(n,s);	
			if(result==0){
				printf("%d\n",i);
			break;	
			}
		}
	}	
    free(n);
		
	return 0;
	
}
   

