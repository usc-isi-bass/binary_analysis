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
	int n,i,j,l;
	char a[100][100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a[i]);
		l=strlen(a[i]);
		if(a[i][l-2]=='e'&&a[i][l-1]=='r')
		{
			for(j=0;j<=l-3;j++)
				printf("%c",a[i][j]);
				printf("\n");
		}
		else if(a[i][l-3]=='i'&&a[i][l-2]=='n'&&a[i][l-1]=='g')
		{
			for(j=0;j<=l-4;j++)
				printf("%c",a[i][j]);
				printf("\n");
		}
		else if(a[i][l-2]=='l'&&a[i][l-1]=='y')
		{
			for(j=0;j<=l-3;j++)
	         	printf("%c",a[i][j]);
				printf("\n");
		}
		else printf("%s",a[i]);
	}
}