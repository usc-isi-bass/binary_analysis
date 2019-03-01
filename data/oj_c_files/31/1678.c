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
	int i,n;
	char a[MAX][MAX];
	for(i=0; ;i++)
	{
		gets(a[i]);
		if(strcmp(a[i],"end")==0) break;
	}
    for(n=i-1;n>=0;n--)
	{
		puts(a[n]);
	}
	return 0;
}
