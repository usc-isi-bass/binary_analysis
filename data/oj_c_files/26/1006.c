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
	int i;
	int j=0;
	char s[101];
	char d[101];
	gets(s);
	for(i=0;s[i-1];i++){
		if(s[i]==' '&&s[i+1]==' '){
			continue;
		}else {
		d[j]=s[i];
		j++;
		}
	}
	puts(d);
	return 0;
}
