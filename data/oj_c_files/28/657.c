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
	char str[30000],w[300][100];
	int len[300],i,m=0,t=0;
    gets(str);
	for(i=0;;i++)
	{
		if(str[i]!=' '&&str[i]!='\0')
		{
	     	w[t][m]=str[i];
			m++;
		}
		else
		{
			if(str[i-1]!=' ')
			{
			   w[t][m]='\0';
			   m=0,t++;
			}
		}
		if(str[i]=='\0') break;
	}
	for(i=0;i<t;i++)
	{
		len[i]=strlen(w[i]);
		if(i!=t-1)
		{
		   printf("%d,",len[i]);
		}
		else
		{
			printf("%d",len[i]);
		}
	}
	return 0;
}

