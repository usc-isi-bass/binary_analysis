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
	char a[100],b[100];
	gets(a);
	int i,j;
	i=0;
	j=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		{
			b[j]=' ';
			j++;
			do
			{
				i++;
			}
			while(a[i]==' ');
		}
		else
		{
			b[j]=a[i];
			i++;
			j++;
		}
	}
	b[j]='\0';
	printf("%s",b);
	return 0;
}