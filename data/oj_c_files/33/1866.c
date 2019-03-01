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


int main ()
{
	int n,i,j,len;
	struct p {
		char a[256];
	}p[10000];
    scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s\n",p[i].a);
	}
	for(i=0;i<n;i++)
	{
		len=0;
		len=strlen(p[i].a);
		for(j=0;j<len;j++)
		{
			if(p[i].a[j]=='A')
				p[i].a[j]='T';
			else if(p[i].a[j]=='T')
				p[i].a[j]='A';
			else if(p[i].a[j]=='G')
				p[i].a[j]='C';
			else
				p[i].a[j]='G';
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",p[i].a);
	}
	return 0;
}