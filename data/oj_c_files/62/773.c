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
	int i,j;
	char a[105];
	gets(a);
	int u;
	for(u=0;a[u]!='\0';u++){
	for(i=0;a[i]!=0;i++){
		if(a[i]==' '&&a[i+1]==' '){
			for(j=i+1;a[j]!='\0';j++){
					a[j]=a[j+1];
			}
		}
		if(a[i]=='.'&&a[i+1]==' '){
			for(j=i+1;a[j]!='\0';j++){
					a[j]=a[j+1];
			}
		}
		if(a[i]==' '&&a[i+1]=='.'){
			for(j=i;a[j]!='\0';j++){
					a[j]=a[j+1];
			}
		}
	}
	}
	puts(a);
	return 0;
}