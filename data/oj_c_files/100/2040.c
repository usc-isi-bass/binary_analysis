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
	char arrey[300];
	int k=0,i=0,num=0,j=0,n=0;
	scanf("%s",arrey);
	n=strlen(arrey);
	for(i=0;i<n;i++)
	{
		if(arrey[i]<'A'||(arrey[i]>'Z'&&arrey[i]<'a')||arrey[i]>'z')
			num++;
		if(num==n)
			printf("No\n");
	}
	num=0;
	for(j=65;j<91;j++)
	{
		for(k=0;k<n;k++)
		{
			if(arrey[k]==j)
			num++;
		}
		if(num!=0)
		printf("%c=%d\n",j,num);
		num=0;
	}
	for(j=97;j<123;j++)
	{
		for(k=0;k<n;k++)
		{
			if(arrey[k]==j)
			num++;
		}
		if(num!=0)
		printf("%c=%d\n",j,num);
		num=0;
	}
	return 0;
}