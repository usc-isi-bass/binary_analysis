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

int main(int argc, char* argv[])
{
	char string[30000];
	int i,len,count=0;
	gets(string);
	len=strlen(string);
	for(i=0;i<len;i++)
	{
		if(string[i]!=' ')
			count++;
		if(string[i]==' '&&string[i+1]!=' ')
		{
			printf("%d,",count);
			count=0;
		}
	}
	printf("%d",count);
	return 0;
}