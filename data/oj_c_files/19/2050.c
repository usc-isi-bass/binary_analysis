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
	char s[200],a[100],b[100],w[100][20];
	int len;
	gets(s);
	gets(a);
	gets(b);
	len=strlen(s);
	int i,j,n=0,k=0;              
	for(i=0;i<=len;i++){
		if(s[i]==32){
			w[n][k]='\0';
			n++;
			k=0;
		}
		else{
			w[n][k]=s[i];
			k++;
		}
	}
	for(j=0;j<=n;j++){
		if(strcmp(w[j],a)==0){
			strcpy(w[j],b);
		}
		if(j==0){
		    printf("%s",w[j]);
		}
		else{
			printf(" %s",w[j]);
		}
	}
	return 0;
}