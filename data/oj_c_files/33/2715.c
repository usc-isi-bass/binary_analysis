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

char input[1000][256],output[1000][256];
int main()
{
	int n,i,j,len;
	scanf("%d",&n);

	char input[1000][256],output[1000][256];
	for(i=0;i<n;i++)
	{
		scanf("%s",input[i]);
	}

	for(i=0;i<n;i++)
	{
		len=strlen(input[i]);
		for(j=0;j<len;j++)
		{
			if(input[i][j]=='A')
				output[i][j]='T';
			if(input[i][j]=='T')
				output[i][j]='A';
			if(input[i][j]=='C')
				output[i][j]='G';
			if(input[i][j]=='G')
				output[i][j]='C';
		}
		output[i][len]='\0';
	}

	for(i=0;i<n;i++)
	{
		printf("%s\n",output[i]);
	}


	return 0;
}