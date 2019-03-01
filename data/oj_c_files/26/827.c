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
	char s[101],y[101];
	int i,j=0,n;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++){
		if((s[i]!=' ')||((s[i]==' ')&&(s[i+1]!=' '))){
			y[j]=s[i];
			j++;
		}
	}
	y[j]='\0';
	puts(y);
	return 0;
}

