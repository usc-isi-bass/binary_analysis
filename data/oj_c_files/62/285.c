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
	int i,j,l;
	char s[210];
	gets(s);
	l=strlen(s);
	j=0;
	for(i=0;i<l;i++)
	{
		if(s[i]==' ')
		{
			if(j==0)
			{
				printf("%c",s[i]);
				j++;
			}
		}
		else
		{
			printf("%c",s[i]);
			j=0;
		}
	}
	return 0;
}
