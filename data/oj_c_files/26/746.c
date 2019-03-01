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
	char str[101];
	int i,j;
	gets(str);
	for(i=0;i<101;i++){
		while((str[i]==' ')&&(str[i+1]==' ')){
			for(j=i+1;j<101;j++){
				str[j]=str[j+1];
			}
		}
	}
	puts(str);
	return 0;
}