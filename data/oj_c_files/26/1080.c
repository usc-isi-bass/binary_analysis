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
	int l,i,k=0;
	char s[101],b[101];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{ b[k++]=s[i];
			while(s[i]==' ')
			{
				i++;
			}
			b[k++]=s[i];
		}
		else b[k++]=s[i];
	}
	b[k]='\0';
	printf("%s",b);

return 0;
}
