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
	char str[300][100];
	int i=0;
	scanf("%s",str[i]);
	int n=strlen(str[i]);
	printf("%d",n);
	while(scanf("%s",str[i])!=EOF)
	{
		n=strlen(str[i]);
		printf(",%d",n);
		i=i+1;
	}
}