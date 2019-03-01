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
    char a[LEN+1],b[LEN+1]={0};
	gets(a);
	int l=strlen(a);
	for(i=1,j=1;i<l;i++){
		b[0]=a[0];
		if(a[i]==' '&&a[i-1]!=' '){
			b[j]=a[i];
			j++;
		}else if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}
	}
	puts(b);
	return 0;
}

