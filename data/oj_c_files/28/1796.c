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
	int len,i,cout,j;
    char b[10000];
	gets(b);
    len=strlen(b);
	for(i=0;i<len;i++)
	{
		cout=0;
		while((b[i]!=' ')&&(i<len))
		{
			cout++;
		    i++;
		}
		printf("%d",cout);
			break;
	}
	for(j=i+1;j<len;j++)
	{
		cout=0;
		if(b[j]==' ')
		{
			continue;
		}
		while((b[j]!=' ')&&(j<len))
		{
			cout++;
		    j++;
		}
		printf(",%d",cout);
	}
	return 0;
}
