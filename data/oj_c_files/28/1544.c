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
	char zfc[2000];
	gets(zfc);
	int sl=strlen(zfc);
	int n=0;
	for(int i=0;i<=sl;i++)
	{
		
		if(i==0)
		{
			n++;
			continue;
		}
		if(zfc[i]!=' '&&zfc[i]!='\0')
		{
			n++;
			continue;
		}
		if(zfc[i]==' '&&zfc[i-1]!=' ')
		{
			printf("%d,",n);
			n=0;
			continue;
		}
		if(zfc[i]==' '&&zfc[i+1]==' ')
		{
			continue;
		}
		if(zfc[i]=='\0')
		{
			printf("%d",n);
		}
	}
	return 0;
}
