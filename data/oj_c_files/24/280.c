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
	int i=0, j;
	char s[500], max[20], min[20], x[20];
	gets(s);
	for(;s[i]!=' ';i++)
		{
			x[i]=s[i];
		}
		x[i]='\0';
		strcpy(min, x);
		strcpy(max, x);
		i++;
	for(;s[i];i++)
	{
		for(j=0;s[i]!=' '&&s[i]!='\0';i++, j++)
		{
			x[j]=s[i];
		}
		x[j]='\0';
		if(strlen(x)>strlen(max))
		{
		    strcpy(max, x);
		}
		if(strlen(x)<strlen(min))
		{
		    strcpy(min, x);
		}
		if(s[i]=='\0')
		{
			break;
		}
	}
	printf("%s\n", max);
	printf("%s\n", min);
	return 0;
}