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
	int n,i,j;
	char s[1000][256],b[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;s[i][j]!='\0';j++)
		{
			if(s[i][j]=='A')
				b[i][j]='T';
			else if (s[i][j]=='T')
				b[i][j]='A';
			else if (s[i][j]=='G')
				b[i][j]='C';
			else if (s[i][j]=='C')
				b[i][j]='G';
		}
		b[i][j]='\0';
		
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",b[i]);
	}
	
	return 0;
}