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
	char shuru[2][50];
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%s",shuru[i]);
	}
	int len=strlen(shuru[1]);
	int j;
	for(j=0;j<len;j++)
	{
		if(shuru[0][0]==shuru[1][j])
		{
			printf("%d",j);
			break;
		}
	}
	return 0;
}

