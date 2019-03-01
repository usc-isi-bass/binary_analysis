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
	int i,n=0;
	char c[101];
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		n++;
	}
	for(i=0;c[i]!='\0';i++)
	{
		if(i<n-1)
		{
			printf("%c",c[i]+c[i+1]);
		}
		if(i==n-1)
		{
			printf("%c",c[i]+c[0]);
		}
	}
	return 0;
}
