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
	char a[1002];
	int i,j;
	for(i=1;i<=1000;i++)
		a[i]=' ';
	for(i=1;i<=1000;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	for(i=1;i<=1000;i++)
		if(a[i]!=' ')
		{
			printf("%c",a[i]);
			break;
		}
	for(j=i+1;j<=999;j++)
	{
		if((a[j]!=' '||(a[j]==' '&&a[j+1]!=' '))&&(a[i]>=32&&a[i]<=122))
			printf("%c",a[j]);
	}
	return 0;
}
