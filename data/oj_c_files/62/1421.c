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
	int i;
	char *s;
	s=(char *)malloc(sizeof(char)*1000);
	gets(s);
	for(i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)!=' ') printf("%c",*(s+i));
		else
		{
			while(*(s+i+1)==' ') i++;
			printf("%c",*(s+i));
		}
	}
	printf("\n");
}