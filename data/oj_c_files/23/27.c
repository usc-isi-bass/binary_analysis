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
	char a[100],b[100][20],c;
	int n,i,j=0,k=0,w;
	gets(a);
	n=strlen(a);
	a[n]=' ';
    for(i=0;i<=n;i++)
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		else
		{
			b[j][k]=a[i];
			j++;
			k=0;
		}
	}
	w=j-1;
	for(i=w;i>0;i--)
	{
		for(j=0;(c=b[i][j])!=' ';j++)
		{
			printf("%c",b[i][j]);
		}
		printf(" ");
	}
	for(j=0;(c=b[i][j])!=' ';j++)
		printf("%c",b[0][j]);
}

