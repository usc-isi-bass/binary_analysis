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
	int i,j=0,n;
	char a[101],b[101];
	gets(a);
	for(i=0;a[i];i++){
		if((a[i]!=' ')||((a[i]==' ')&&(a[i+1]!=' '))){
			b[i-j]=a[i];
		}else{
			j++;
		}
	}
	n=strlen(a);
	b[n-j]='\0';
	printf("%s",b);
	return 0;
}
