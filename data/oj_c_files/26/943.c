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

int main()
{
	char a[N+1],b[N+1];
	int k=0,i;
	gets(a);
	for(i=0;a[i-1];i++){
		if(a[i]==' '&&a[i+1]==' '){
			continue;
		}else{b[k]=a[i];
		k++;
		}
	}
	puts(b);
	return 0;
}