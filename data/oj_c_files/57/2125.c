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

main()
{
	int n,i,j;
	char a[50][32];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		gets(a[i]);
	for(i=0;i<=n;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			if(a[i][j]=='e'&&a[i][j+1]=='r'&&a[i][j+2]=='\0')
			{
				a[i][j]='\0';break;
			}
			if(a[i][j]=='i'&&a[i][j+1]=='n'&&a[i][j+2]=='g'&&a[i][j+3]=='\0')
			{
				a[i][j]='\0';break;
			}
			if(a[i][j]=='l'&&a[i][j+1]=='y'&&a[i][j+2]=='\0')
			{
				a[i][j]='\0';break;
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		puts(a[i]);
	}

}

		