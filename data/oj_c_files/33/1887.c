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
    int n,i,l,j;
	char s[1000][300],ds[1000][300];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",&s[i]);
        l=strlen(s[i]);
		for (j=0;j<l;j++)
		{
			if (s[i][j]=='A') ds[i][j]='T';
			if (s[i][j]=='T') ds[i][j]='A';
			if (s[i][j]=='G') ds[i][j]='C';
			if (s[i][j]=='C') ds[i][j]='G';
		}
        ds[i][l]='\0';
	}
	for (i=0;i<n;i++) puts(ds[i]);
    return 0;
}