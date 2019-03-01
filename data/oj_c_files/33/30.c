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
	char a[1000],b[1000][1000];
	int n,i,j,len[1000];
	scanf("%d",&n);
	gets(a);
	for(i=0;i<n;i++)
	{
		gets(a);
		len[i]=strlen(a);
		for(j=0;j<len[i];j++)
		{
			if(a[j]=='A')
			{
				b[i][j]='T';
			}
			if(a[j]=='T')
			{
				b[i][j]='A';
			}
			if(a[j]=='C')
			{
				b[i][j]='G';
			}
			if(a[j]=='G')
			{
				b[i][j]='C';
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<len[i];j++)
		{
			printf("%c",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
			
