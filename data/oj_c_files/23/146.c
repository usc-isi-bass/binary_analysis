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

void main(void)
{
	int i, num, j, l;
	char c[101], a[50][30];
	gets(c);
	l = strlen(c);
	num = 0;
	j = 0;
	for(i = 0;i < l;i ++)
	{
		if(c[i] != ' ')
		{
			a[num][j] = c[i];
			j ++;
		}
		else
		{
			a[num][j] = '\0';
			num ++;
			j = 0;
		}
	}
	a[num][j] = '\0';
	for(i = num;i > 0;i --)
		printf("%s ",a[i]);
	printf("%s",a[0]);
}