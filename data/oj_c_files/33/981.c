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
	int n,i,j,m;
	char a[500],b[500];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		scanf("%s",a);
		for(j=1;j<=strlen(a);j++)
		{
			if(a[j-1]=='A')
				b[j-1]='T';
			else if(a[j-1]=='T')
				b[j-1]='A';
			else if(a[j-1]=='C')
				b[j-1]='G';
			else if(a[j-1]=='G')
				b[j-1]='C';
		}
		for(m=1;m<=strlen(a);m++)
		{	printf("%c",b[m-1]);
		}
		printf("\n");
	}
	return 0;
}