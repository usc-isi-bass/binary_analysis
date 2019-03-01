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
	int i,j,k,l,n;
	char a[1000][5000];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",a[i]);
	}
	
	for(i=0;i<=n-1;i++)
	{
		j=0;
		while(a[i][j]!='\0')
		{
			if(a[i][j]=='A')
			{
				a[i][j]='T';
				j++;
			}
			if(a[i][j]=='T')
			{
				a[i][j]='A';
				j++;
			}
			if(a[i][j]=='C')
			{
				a[i][j]='G';
				j++;
			}
			if(a[i][j]=='G')
			{
				a[i][j]='C';
				j++;
			}
		}
	}
	for(i=0;i<=n-1;i++)
		printf("%s\n",a[i]);
	return 0;
}

