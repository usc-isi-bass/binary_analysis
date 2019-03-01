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

char st[1000][256];
int n,i,l,j;
int main()
{
    scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
	scanf("%s",st[i]);
	l=strlen(st[i]);
	for (j=0;j<=l;j++)
	{
		if (st[i][j]=='A')
			printf("T");
		else if (st[i][j]=='T')
		    printf("A");
		else if (st[i][j]=='C')
			printf("G");
		else if (st[i][j]=='G')
			printf("C");
	}
	printf("\n");
	}
	return 0;
}



