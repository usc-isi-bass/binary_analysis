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
	char str[101],str1[101],str2[101];
	gets(str);
	gets(str1);
	gets(str2);
	int i,len=strlen(str),n=0;
	char *p[101];
	p[n]=str;
	for(i=0;i<len;i++)
	{
		if(str[i]==' ')
		{
			str[i]=0;
			p[++n]=&str[i+1];
		}
	}
    for(i=0;i<=n;i++)
	{
		if(strcmp(p[i],str1)==0)
		{
		    printf("%s",str2);
		}
		else
			printf("%s",p[i]);
		if (i != n) printf(" ");
	}
	return 0;
}