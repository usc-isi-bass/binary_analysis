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
	int i,l,m;
	char a[300],b[300];
	gets(a);
	m=0;
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==' '&&a[i+1]!=' '){
			b[m]=a[i];
			m++;
			}else if(a[i]!=' '){
			b[m]=a[i];
			m++;
			}else{
				continue;
			}
	}
	b[m]='\0';
	printf("%s", b);
	return 0;
}