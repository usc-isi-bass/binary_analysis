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
	char a[501][500];
	for(i=0;;i++)
	{
		gets(a[i]);
		if (a[i][0]=='e')
		{
			m=i;
			break;
		}
	}
	for(i=m-1;i>=0;i--)
	{
		puts(a[i]);
	}
	return 0;
}
