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
	char st[101];
	int i;
	gets(st);
    i=0;
	while (st[i]!='\0')
	{
		if ((st[i]!=' ')||(st[i-1]!=' ')) printf("%c",st[i]);
		i++;
	}
	return 0;
}
