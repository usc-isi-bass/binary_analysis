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
	int i,len,n=0;
	char s[NUM],c[NUM];
	gets(s);
	len=strlen(s);
	for(i=0;i<len-1;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{
			continue;
		}
		else
		{
			c[n]=s[i];
			n++;
		}
	}
	if(s[len-1]!=' ')
	{
		c[n]=s[len-1];
		c[n+1]='\0';
	}
	else
	{
		c[n]='\0';
	}
	printf("%s",c);
	return 0;
}
