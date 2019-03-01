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


int main(int argc, char* argv[])
{
	int n,len,i,j;
	char a[256];

	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		gets(a);
		len=strlen(a);
		for (j=0;j<len;j++)
		{
			if (a[j]=='A')
			{
				printf("T");
			}
			if (a[j]=='T')
			{
				printf("A");
			}
			if (a[j]=='C')
			{
				printf("G");
			}
			if (a[j]=='G')
			{
				printf("C");
			}
		}
		printf("\n");
	}


	return 0;
}
