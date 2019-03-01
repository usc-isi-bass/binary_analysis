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
	char a[5],c;
		int i;
	for(i=0;(c=getchar())!='\n';i++)
		a[i]=c;
	i=i-1;
	while(i>=0)
	{
		c=a[i];
		printf("%c",c);
		i=i-1;
	}
}
		