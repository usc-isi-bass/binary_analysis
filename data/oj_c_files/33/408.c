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
	char zfc[1000][256];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		gets(zfc[i]);
		j=0;
		while(zfc[i][j]!='\0')
		{
			if(zfc[i][j]=='A')
			{
				printf("T");
			}
			if(zfc[i][j]=='T')
			{
				printf("A");
			}
			if(zfc[i][j]=='C')
			{
				printf("G");
			}
			if(zfc[i][j]=='G')
			{
				printf("C");
			}
			j=j+1;
		}
		printf("\n");
	}
	return 0;
}