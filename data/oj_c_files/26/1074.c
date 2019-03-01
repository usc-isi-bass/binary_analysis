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
	char a[101],b[101];
	int i,c;
	gets(a);
	c=strlen(a);
	for(i=0;i<c;i++)
	{
		if(a[i]!=' ')
			printf("%c",a[i]);
		else if(a[i-1]!=' ')
			printf(" ");
	}
	return 0;
}
