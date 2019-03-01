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
	char s[1000][100];
	int i;
	for(i=0;;i++)
	{
		gets(s[i]);
		if(s[i][0]=='e')
		{
			i--;
			break;
		}
	}
	for(;i>=0;i--)
		printf("%s\n",s[i]);
}