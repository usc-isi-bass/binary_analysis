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
	int n,i,j,len;
	char str[1000][256],s[1000][256]={'\0'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        scanf("%s",str[i]);
		len=strlen(str[i]);
		for(j=0;j<len;j++)
		{
			if(str[i][j]=='A')
			{
				s[i][j]='T';
			}
			if(str[i][j]=='T')
			{
				s[i][j]='A';
			}
			if(str[i][j]=='G')
			{
				s[i][j]='C';
			}
			if(str[i][j]=='C')
			{
				s[i][j]='G';
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}
	return 0;
}