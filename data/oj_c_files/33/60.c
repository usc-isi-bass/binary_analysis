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
	char a[256],t='T',b='A',g='G',c='C';
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			if(a[j]=='A')
				printf("%c",t);
			if(a[j]=='T')
				printf("%c",b);
			if(a[j]=='C')
				printf("%c",g);
			if(a[j]=='G')
				printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}