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

void main()
{
	char a[50][20];
	int i=0,len;
	while(scanf("%s",a[i])!=EOF)
	{
		i++;
	}
	i--;
	printf("%s",a[i]);
	i--;
	for(;i>=0;i--)
	{
		printf(" %s",a[i]);
	}
}