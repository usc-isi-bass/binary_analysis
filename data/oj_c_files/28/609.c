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
	int i,j;
	char s[300][100];
	for(i=0;;i++)
	{
		scanf("%s",s[i]);
		if(getchar()=='\n') break;
	}
	for(j=0;j<i;j++)
	{
		printf("%d,",strlen(s[j]));
	}
	printf("%d",strlen(s[i]));
}
