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
	char str[999999];
	gets(str);
	int len=strlen(str);
	int i,n=0,k=0;
    char words[300][100];
	for(i=0;i<len;i++)
	{
		if(str[i]!=' ')
		{
			words[n][k]=str[i];
			k++;
		}
		else if(str[i-1]!=' '&&str[i]==' ')
		{
			words[n][k]='\0';
		    n++;
			k=0;
		}
	}
	words[n][k]='\0';
	for(i=0;i<n;i++)
	{
		printf("%d,",strlen(words[i]));
	}
	printf("%d",strlen(words[n]));
	return 0;
}