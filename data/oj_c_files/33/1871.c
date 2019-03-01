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

int len[10000];
char str[10000][10000];
int main()

{
	int n,i,j;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",&str[i]);
	len[i]=strlen(str[i]);}
	for(i=0;i<n;i++)
	{
		for(j=0;j<len[i];j++)
		{
			if(str[i][j]=='A')
			{str[i][j]='T';
			continue;}
			if(str[i][j]=='T')
			{str[i][j]='A';
			continue;}
			if(str[i][j]=='C')
			{str[i][j]='G';
			continue;}
			if(str[i][j]=='G')
			{str[i][j]='C';
			continue;}
		}
	}
	for(i=0;i<n;i++)
	{printf("%s\n",str[i]);}

	return 0;
}
