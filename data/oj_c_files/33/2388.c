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
	int n,i,j,l;
	scanf("%d\n", &n);
	char a[300];
	for(i=1;i<=n;i++)
	{
		gets(a);
		l=strlen(a);
		for(j=0;j<=l;j++)
		{
			if(a[j]=='A')
			{
				a[j]='T';
				printf("%c", a[j]);
			}
			else if(a[j]=='T')
			{
				a[j]='A';
				printf("%c", a[j]);
			}
			else if(a[j]=='C')
			{
				a[j]='G';
				printf("%c", a[j]);
			}
			else if(a[j]=='G')
			{
				a[j]='C';
				printf("%c", a[j]);
			}
		}
		printf("\n");
	}

return 0;
}