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
	scanf("%d\n",&n);
	char d[256]={'\0'};
    for(i=0;i<n;i++)
	{
	    char a[256]={'\0'};
		scanf("%s",&d);
		for(j=0;d[j]!='\0';j++)
		{
			if(d[j]=='A')
			{
				a[j]='T';
			}
			if(d[j]=='T')
			{
				a[j]='A';
			}
			if(d[j]=='C')
			{
				a[j]='G';
			}
			if(d[j]=='G')
			{
				a[j]='C';
			}
		}
		printf("%s\n",a);
	}
	return 0;
}
