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
	char a[101];
	int len,i,signal;
	gets(a);
	len=strlen(a);
	signal=0;
	for(i=0;i<len;i++)
	{
		if(a[i]==' ' && signal==0)
		{
			printf(" ");
			signal=1;
		}
		else if(a[i]!=' ')
		{
			printf("%c",a[i]);
			signal=0;
		}		
	}
	printf("\n");
	return 0;
}