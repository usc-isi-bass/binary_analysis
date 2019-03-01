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
	char s[100];
	int i,k;
	gets(s);
	for (i=1,k=1;s[i]!='\0';i++,k++)
	{
		if (s[i]==' '&&s[i-1]==' ')
		{
			k--;
		}
		else s[k]=s[i];
	}
	s[k]='\0';
	printf("%s\n",s);
}