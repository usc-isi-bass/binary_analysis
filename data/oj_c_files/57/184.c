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
	int n,i,l,j;
	char s[50][50];
	l=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(s[i]);
		if(s[i][l-1]=='r')
		{
			for(j=0;j<l-3;j++)
			{	printf("%c",s[i][j]);}
			printf("%c\n",s[i][l-3]);
		}
                 else if(s[i][l-1]=='y')
		{
			for(j=0;j<l-3;j++)
			{	printf("%c",s[i][j]);}
			printf("%c\n",s[i][l-3]);
		}
                else if(s[i][l-1]=='g')
		{
			for(j=0;j<l-4;j++)
			{printf("%c",s[i][j]);}
			printf("%c\n",s[i][l-4]);
		}
	}
}