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
	int i,j,l,h;
	char s[60],w[60],b[60];
	scanf("%s %s",w,s);
	l=strlen(s);
	h=strlen(w);
	for(i=0;i<=l-h;i++)
	{
		for(j=0;j<h;j++)
		{
			b[j]=s[i+j];
		}
		b[h]='\0';
		if(strcmp(b,w)==0)
		{
			printf("%d",i);
			break;
		}
		for(j=0;j<60;j++)
		{
			b[j]=0;
		}
	}
	return 0;
}
