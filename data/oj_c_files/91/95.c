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
	int i,j,n;
	char c[100]={'\0'};
	gets(c);
    n=strlen(c);
    for (i=0;i<n-1;i++)
	{
		printf("%c",c[i]+c[i+1]);
	}
	printf("%c",c[0]+c[n-1]);
	return 0;
}