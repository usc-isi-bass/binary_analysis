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
	char str[10000],sz[300][30];
	gets(str);
	int i,j=0,k=0,tag,c;
	c=strlen(str);
	for(i=0;i<=c;i++)
	{
		if(str[i]!=' '){
			sz[j][k]=str[i];
			k++;
			tag=0;
		}
		else if((str[i]==' ')&&(tag==0))
		{
			sz[j][k]='\0';
			j++;
			k=0;
			tag=1;
		}
	}
	for(i=0;i<j;i++)
	{
		int a;
		a=strlen(sz[i]);
		printf("%d,",a);
	}
	int b;
	b=strlen(sz[j]);
	printf("%d",b);
	return 0;
}

