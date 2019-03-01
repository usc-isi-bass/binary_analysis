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
	int n,i,k;
	char s[10000][256],sd[10000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;s[i][k]!='\0';k++)
		{
			if(s[i][k]=='A')
			{
				sd[i][k]='T';
			}
			if(s[i][k]=='T')
			{
				sd[i][k]='A';
			}
			if(s[i][k]=='C')
			{
				sd[i][k]='G';
			}
			if(s[i][k]=='G')
			{
				sd[i][k]='C';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",sd[i]);
		printf("\n");
	}
	return 0;
}