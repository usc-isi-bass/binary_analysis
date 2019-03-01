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
	int i;
	char *s;
	s=(char *)malloc(sizeof(char)*30);
	gets(s);
	for(i=0;*(s+i)!='\0';i++)
	{
		if(*(s+i)>'0'-1&&*(s+i)<'9'+1)
		{
			if(*(s+i+1)>'0'-1&&*(s+i+1)<'9'+1)
			printf("%c",*(s+i));
			else printf("%c\n",*(s+i));
		}
	}
	return 0;
}
