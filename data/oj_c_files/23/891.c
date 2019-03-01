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
	char *p[100];
	int i;
	for (i=0;i<100;i++)
	    p[i]=(char *)malloc(100);
	i=0;
	while (scanf("%s",p[i])!=EOF)
	{
		i++;
	}
	int j=0;
	printf("%s",p[i-1]);
	for (j=i-2;j>=0;j--)
		printf(" %s",p[j]);
}
	