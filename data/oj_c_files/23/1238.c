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
	char c;
	int i=0,j,k,t;
	char str[30][30];
	do
	{
		scanf("%s",str[i]);
		i++;
	}while((c=getchar())!='\n');
	t=i;
	printf("%s",str[t-1]);
	for(i=t-2;i>=0;i--)
	printf(" %s",str[i]);
}
