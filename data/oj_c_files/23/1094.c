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
	char str[100];
	int i,j,n,m;
	gets(str);
	for(n=0;str[n]!='\0';)
	{
		n++;
	}
for(i=n-1,m=n;i>=0;i--)
	{ 
		if(str[i]==' ') 
		{
			for(j=i+1;j<m;j++)
				{
				printf("%c",str[j]);
				}
			printf(" ");
			m=i;
		}

	}
	for(i=0;i<m;i++)
	printf("%c",str[i]);
}