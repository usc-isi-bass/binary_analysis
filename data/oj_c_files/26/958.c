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
	int n,i;
	char jz[101];
	char jg[101];
	gets(jz);
	n=strlen(jz);
	int s=0;
	for(i=0;i<n;i++)
	{
		if(jz[i]!=32)
		{
			jg[s]=jz[i];
			s++;
		}
		else
		{
			if(jz[i-1]!=32)
			{
				jg[s]=jz[i];
				s++;
			}
		}
	}
	for(i=0;i<s;i++)
	{
		printf("%c",jg[i]);
	}
	return 0;
}