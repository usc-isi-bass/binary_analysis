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
	int a[5],n;
	m=0;
	while((a[m]=getchar())!='\n')
		{m++;}
	for(i=4;i>=0;i--)
	{if(a[i]>=0&&a[i]<=500)
	putchar(a[i])	;
	}
}
