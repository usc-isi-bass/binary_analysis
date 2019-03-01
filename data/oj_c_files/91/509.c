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
	int i,l;
	char x[105],y[105];
	gets(x);
	l=strlen(x);
	for(i=0;i<l-1;i++){
		y[i]=x[i]+x[i+1];
	}
	y[l-1]=x[l-1]+x[0];
	y[l]='\0';
	printf("%s",y);
	return 0;
}
	