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
	int i=0, n=0;
	char a[500][100];
	for(i=0; i<500; i++)
	{
		gets(a[i]);
		//getchar();
		if(a[i][0]=='e') break;
	}
	n=i-1;
	for(i=n; i>=0; i--)
	{
		printf("%s\n",a[i]);
	}
}