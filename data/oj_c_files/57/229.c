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
	int n,i,j,a[51]={0};
	char s[51][51],str[10];
	scanf("%d",&n);

	for(i=0;i<n+1;i++)
	{
		gets(s[i]);
		a[i]=strlen(s[i]);
	}
	for(i=1;i<n+1;i++)
	{
		if (s[i][a[i]-1]=='r')
		{
			for (j=0;j<a[i]-2;j++)
				printf("%c",s[i][j]);
		}
		else if (s[i][a[i]-1]=='y')
		{
			for (j=0;j<a[i]-2;j++)
				printf("%c",s[i][j]);
		}
		else if (s[i][a[i]-1]=='g')
		{
			for (j=0;j<a[i]-3;j++)
				printf("%c",s[i][j]);
		}
		printf("\n");
	}

}