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

void main()
{
	char a[100][10]={'\0'},c;
	int i,j;
	i=0;j=0;
	c='A';
	while(c!='\n')
	{
		scanf("%c",&c);
		if(c!=' '&&c!='\n')
		{
			a[i][j]=c;
			j=j+1;
		}
		else if(c==' ')
		{
			i=i+1;
			j=0;
		}
	}
	for(j=i;j>0;j=j-1)
	{
		printf("%s ",a[j]);
	}
	printf("%s",a[0]);
}
