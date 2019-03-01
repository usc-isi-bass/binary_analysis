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

int main (){
	char a[100],b[100];
	gets(a);
	int c=strlen(a),d=0,i;
	for (i=0;i<c;i++){
		if (a[i]==' '&&a[i+1]==' '){
			d++;
			continue;
		}
		else{
			b[i-d]=a[i];
		}
	}
	b[i-d]='\0';
	puts(b);
	return 0;
}