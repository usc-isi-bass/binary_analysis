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

int main ()
{
	int i,j,n;
	char a[201],b[201];
	gets(a);
	for(i=0,j=0;a[i];i++){
		if(a[i]==' ')
			if(a[i+1]==' '){
				j=j;
			}
			else{
				b[j]=a[i];
				j++;
			}
		else{
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	printf("%s",b);
	return 0;
}