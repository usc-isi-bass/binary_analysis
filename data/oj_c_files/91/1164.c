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
	char x[150],y[150];
	int i;
	gets(x);
	for (i=0;i<=120;i++)
		y[i]=0;
	for (i=0;i<strlen(x)-1;i++)
		y[i]=x[i]+x[i+1];
	y[strlen(x)-1]=x[0]+x[strlen(x)-1];
	printf("%s",y);
	return(0);
}
