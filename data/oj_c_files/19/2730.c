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
	unsigned int i=0,j=0;
	char s[101];
	char a[101];
	char b[101];
	char tmp[101];
	gets(s);
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			tmp[j]=s[i];
			j++;
		}
		else
		{
			tmp[j]='\0';
			j=0;
			if(strcmp(tmp,a)==0)
				printf("%s ",b);
			else
				printf("%s ",tmp);
		}
	}
	tmp[j]='\0';
	if(strcmp(tmp,a)==0)
		printf("%s\n",b);
	else
		printf("%s\n",tmp);
	return 0;
}