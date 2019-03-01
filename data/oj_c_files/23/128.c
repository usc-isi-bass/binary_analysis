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
	int i=0,j=0,t;
	char a[20][20],c;
	while((c=getchar())!='\n')
	{
		if(c!=' ')
		{
			a[i][j]=c;
			j++;
		}
		else 
		{
			a[i][j]='\0';
			j=0;
		
			
			i++;
		}
	}
	a[i][j]='\0';
	for(t=i;t>0;t--)
		printf("%s ",a[t]);
	printf("%s",a[0]);
}