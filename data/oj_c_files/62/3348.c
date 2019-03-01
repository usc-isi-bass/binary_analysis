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
	int i, j;
	char str[50][20], s;
	for(i=0;;i++)
	{
		scanf("%s",str[i]);
		if(s=getchar()=='\n')break;

	}
	for(j=0;j<i;j++)
	{
		printf("%s ", str[j]);
	}
	printf("%s", str[i]);
	return 0;
}
	