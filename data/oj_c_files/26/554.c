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
	char words[200][30],input[10000];
	int len,i=0,j=0,k;
	gets(input);
	len = strlen(input);
	for(k = 0;k <= len;k++)
	{
		if(input[k] == ' ' )
		{
			if(j == 0)
				continue;
			words[i++][j] = '\0';
			j = 0;
		}
		else
			words[i][j++] = input[k];
	}
	for(k = 0;k <= i;k++)
	{
	if(k!=i)
	{printf("%s ",words[k]);}
	else
		printf("%s\n",words[k]);
	}
	return 0;
}