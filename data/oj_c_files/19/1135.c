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
    char a[100];
	char b[100];
	char c[100];
	char d[50][100];
	gets(a);
	scanf("%s",b);
	scanf("%s",c);
    
	int chang,i,n,m;
	int u=0,v=0;
	chang=strlen(a);
    
	for(i=0;i<chang;i++){
		if(a[i]!=' '){
			d[u][v]=a[i];
			v++;
		}else{
			v=0;
			u++;
		}
	}

    for(i=0;i<u;i++){
		if(strcmp(b,d[i])==0){
			printf("%s ",c);
		}else{
			printf("%s ",d[i]);
	}
		
	}


    if(strcmp(b,d[i])==0){
		printf("%s",c);
	}else{
		printf("%s",d[u]);
	}

	return 0;
}

