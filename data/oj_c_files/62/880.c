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
	char a[1000];
	gets(a);
	int i=0;
	int m;
	m=strlen(a);
	for(i=0;i<m;i++){
		if((i==0&&a[i]==' ')||(a[i-1]==' '&&a[i]==' ')){
			continue;
		}else{
			printf("%c",a[i]);
		}
	}

		return 0;
	}
