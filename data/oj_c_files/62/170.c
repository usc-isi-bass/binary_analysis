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
	char str[200];
	gets(str);
	int len=strlen(str);
	int i,j,f=0;
	for(i=0;i<len-f;i++){
		if(str[i]==' '&&str[i+1]==' '){
			for(j=i;j<len-f;j++){
				str[j]=str[j+1];
				i=0;
			}
			str[len-f-1]='\0';
			f++;
		}
	}
	puts(str);
	return 0;
}