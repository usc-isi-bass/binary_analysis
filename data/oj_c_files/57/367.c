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
	char a[50][20],b[50];
	int n,i,j,c;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
		b[i]=strlen(a[i]);
	for(i=0;i<n;i++)
	{
		c=b[i];
		if(a[i][c-1]=='g')
		{a[i][c-1]='\0';
            a[i][c-2]='\0';
			a[i][c-3]='\0';
		}
        else
		{
			a[i][c-1]='\0';
		    a[i][c-2]='\0';
		}
		printf("%s\n",a[i]);
	}
}
