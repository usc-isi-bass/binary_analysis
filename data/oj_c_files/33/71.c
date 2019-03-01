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
	int i,j,n,len;
	char zfc[1000][256];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",zfc[i]);
		len=strlen(zfc[i]);
		for(j=0;j<len;j++)
		{
			if(zfc[i][j]=='A')
				printf("T");
			else if(zfc[i][j]=='T')
				printf("A");
			else if(zfc[i][j]=='G')
				printf("C");
			else
				printf("G");
		}
		printf("\n");

	}


	return 0;
}