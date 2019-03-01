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
	int m,n,i,s;
	char a[1000][100];
	for(i=1;;i++)
	{
		gets(a[i]);
		if(strcmp(a[i],"end")==0)
			break;
	}
	for(s=i-1;s>0;s--)
		printf("%s\n",a[s]);
	return 0;
}