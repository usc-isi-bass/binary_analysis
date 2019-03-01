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
int i,j;
char str[101];
gets(str);
for(i=0;i<strlen(str);i++)
{
	if(str[i]==' ')
	{
		if(str[i+1]==' ')
		{
			for(j=i;j<=strlen(str);j++)
			{str[j]=str[j+1];
			}
			i--;
		}

	}
	
}
printf("%s",str);
}