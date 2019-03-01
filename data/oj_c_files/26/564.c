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
	char s[1001];
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		while(s[i]!=' '&&s[i]!='\0')
		{
			printf("%c",s[i]);
			i++;
		}
		if(s[i]!='\0')
		    printf(" ");
		while(s[i]==' ')
		{
			i++;
		}
	}
	return 0;
}