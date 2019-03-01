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
	int i,j,n;
	char sz[10000][260];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",sz[i]);
		for(j=0;sz[i][j]!='\0';j++)
		{
				if(sz[i][j]-'A'==0)
					sz[i][j]='T';
				else if(sz[i][j]-'T'==0)
					sz[i][j]='A';
			    else if(sz[i][j]-'C'==0)
					sz[i][j]='G';
				else if(sz[i][j]-'G'==0)
					sz[i][j]='C';
		}
		printf("%s\n",sz[i]);
	}
	return 0;
}