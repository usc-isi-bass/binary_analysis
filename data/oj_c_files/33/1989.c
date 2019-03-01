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
	int n,i,j;
	char a[256],b[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a);
		for(j=0;j<(int)strlen(a);j++)
		{
			if(a[j]=='A') b[j]='T';
			else if(a[j]=='T') b[j]='A';
			else if(a[j]=='G') b[j]='C';
			else b[j]='G';
		}
		b[j]='\0';
		printf("%s\n",b);
	}
	return 0;
}

	