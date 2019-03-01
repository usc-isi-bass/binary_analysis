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
	char str[100000];
	char c;
	int i,m,n,j;
	gets(str);
	m=strlen(str);
	n=1;
	j=0;
	for(i=0;i<=m;)
	{
		c=str[i];
		if(c!=' ')
		{j=j+1;
		i=i+1;}
		else
		{
			if(j!=0)
			{printf("%d,",j);}
		j=0;
		i=i+1;}
	}
	j=j-1;
printf("%d",j);

}

		