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

int main ()
{
	int i,m;
	char c[30];
	for (i=0;;i++)
	{
		scanf("%c",&c[i]);
		if (c[i]=='\n')
			break;
	}
	if('0'<=c[0]&&c[0]<'9')
		printf("%c",c[0]);
	for (m=1;m<i;m++)
	{
		if(c[m]<'0'||c[m]>'9')
		{
			if('0'<=c[m-1]&&c[m-1]<='9')
			printf("\n");
		}
		else if('0'<=c[m]<='9')
			printf("%c",c[m]);
	}
	return 0;
}