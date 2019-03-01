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
	char a[100];
	gets(a);
	int len=strlen(a);
	int i,j;
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			for(j=1;j<(len-1-i);j++)
			{
				if(a[i+j]==' ')
					a[i+j]='#';
				else
					break;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		if(a[i]!='#')
			printf("%c",a[i]);
	}
	return 0;

}