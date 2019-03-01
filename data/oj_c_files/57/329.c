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
	int n;
	scanf("%d",&n);
	getchar();
	char a[50][10000];
	int i;
	for(i=0;i<n;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<n;i++)
	{
		int j;
		int len=strlen(a[i]);
		if(a[i][len-2]=='e' && a[i][len-1]=='r' || a[i][len-2]=='l' && a[i][len-1]=='y')
		{
			for(j=0;j<len-2;j++)
				putchar(a[i][j]);
		}
		if(a[i][len-3]=='i' && a[i][len-2]=='n' && a[i][len-1]=='g' )
		{
			for(j=0;j<len-3;j++)
				putchar(a[i][j]);
		}
		printf("\n");
	}
	return 0;
}