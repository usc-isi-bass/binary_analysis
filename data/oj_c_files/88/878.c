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
	char c[30];
	int i,n;
	gets(c);
	n=strlen(c);
	for (i=0;i<n;i++)
	{
		if(((c[i]>='0')&&(c[i]<='9'))&&((c[i+1]>='0')&&(c[i+1]<='9')))
			printf("%c",c[i]);
		else if (((c[i]>='0')&&(c[i]<='9'))&&((c[i+1]<'0')||(c[i+1]>'9')))
			printf("%c\n",c[i]);
	}
}