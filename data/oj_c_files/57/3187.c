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
	char a[100][100],b[100][100];
	int c[100];
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		c[i]=strlen(a[i]);
		if(a[i][c[i]-1]=='r'||a[i][c[i]-1]=='y')
		{
			for(j=0;j<c[i]-2;j++)
				b[i][j]=a[i][j];
			b[i][c[i]-2]='\0';
		}
			else
			for(j=0;j<c[i]-3;j++)
			{
				b[i][j]=a[i][j];
				b[i][c[i]-3]='\0';
			}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",b[i]);
		if(i<n-1)
			printf("\n");
	}
}