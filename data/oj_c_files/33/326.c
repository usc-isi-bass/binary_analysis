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

char chaina[1000][260], chainb[1000][260];
int len;
int main()
{
	int n, i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", chaina[i]);
		len=strlen(chaina[i]);
		for(j=0; j<len; j++)
		{
			switch(chaina[i][j])
			{
			   case 'A':
				   chainb[i][j]='T';
				   break;
			   case 'T':
				   chainb[i][j]='A';
				   break;
			   case 'C':
				   chainb[i][j]='G';
				   break;
			   case 'G':
				   chainb[i][j]='C';
			}
		}
	}
	for(i=0; i<n; i++)
		printf("%s\n", chainb[i]);
	return 0;
}
