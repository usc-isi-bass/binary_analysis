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
	char a[MAX],b[MAX];
	int i,len,j;
	gets(a);
    len=strlen(a);
	for(i=0,j=0;i<len;i++){
		if(a[i]=='\0'){
			break;
		}
		if(a[i]==' '&&a[i+1]==' '){
			continue;
		}
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	puts(b);
	return 0;
}