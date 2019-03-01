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
	char str[100][50]={'\0'};
	char (*p)[50];
	int i=0,j;
	while(scanf("%s",str[i])!=EOF)
	{
		i++;
	}
	p=str;
	for (j=i-1;j>=1;j--)
		printf("%s ",p[j]);
	printf("%s",p[0]);
}

