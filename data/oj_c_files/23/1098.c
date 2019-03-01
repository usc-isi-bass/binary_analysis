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
	char s[100][100];
	int i,n;
	i=0;
	while (scanf("%s",*(s+i))!=EOF)
	{i++;}
	n=i;
	for(i=n-1;i>=1;i--)
    {printf("%s ",*(s+i));}
    printf("%s",*s);
}
