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
	char a[1100][256];
	char b[256];
	scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%s",b);
		l=strlen(b);
		for(j=0;j<=(l-1);j++)
		{
			 if(b[j]=='A')
				b[j]='T';
             else if(b[j]=='T')
				b[j]='A';
             else if(b[j]=='G')
 				b[j]='C';
             else if(b[j]=='C')
				b[j]='G';
		}
		strcpy(a[i],b);
	}
	for(i=0;i<=(n-1);i++)
		printf("%s\n",a[i]);
}