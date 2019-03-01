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
	int i,m;
	m=1;
	char s[5];
	scanf("%s",s);
    i=strlen(s);
	i=i-1;
	while (i>=0)
	{
		printf("%c",s[i]);
		i=i-1;
	}
	return 0;
}
