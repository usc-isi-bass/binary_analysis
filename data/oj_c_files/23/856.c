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
	char s[100],a[30][10]={'\0'};
	int i,len,l=0,p=0;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{if(s[i]!=' ')
	{a[l][p]=s[i];
	p++;
	}
    if((s[i+1]==' '&&s[i]!=' ')||s[i+1]=='\0')
	{l++;p=0;}
	}
	printf("%s",a[l-1]);
	for(i=l-2;i>=0;i--)
		printf(" %s",a[i]);
	return 0;
}

