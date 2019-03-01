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
    int i,j=0;
	char zfc[1000];
	char a[1000];
	gets(zfc);
    for(i=0;zfc[i]!='\0';i++)
	{
		if(zfc[i]!=' ')
		{
			a[j]=zfc[i];
			j++;
		}
		else if(zfc[i+1]==' ')
		{
			continue;
		}
		else
		{
		 a[j]=zfc[i];
			j++;;
		}
	}
	a[j]='\0';
	printf("%s\n", a);
	return 0;
}