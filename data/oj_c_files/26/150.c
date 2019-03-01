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
	gets(s);
	int i, j=1;
	for(i=0; i<strlen(s); i++)
	{
		j=1;
		if(s[i]==' ') 
		{
			while(s[i+j]==' ')
			{
				s[i+j]='/';
				j++;
			}
		}
	}
	//printf("%s",s);
	for(i=0; i<strlen(s); i++)
	{
		if(s[i]!='/') printf("%c",s[i]);
	}
}