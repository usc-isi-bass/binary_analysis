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
	char a[500],b[100],c[100],d[100][100];
	gets(a);
	gets(b);
	gets(c);
	int i,j,k=0;
	for(i=0;i<strlen(a);i++,k++)
	{
		for(j=i;a[j]!=' ';j++)
		{
			d[k][j-i]=a[j];
			d[k][j-i+1]='\0';
			if(a[j]=='\0')
			{
				break;
			}
		}
		i=j;
	}
	for(i=0;i<k;i++)
	{
		if(strcmp(b,d[i])==0)
		{
			strcpy(d[i],c);
		}
	}
	for(i=0;i<k-1;i++)
	{
		printf("%s ",d[i]);
	}
	printf("%s",d[k-1]);
	return 0;
}
