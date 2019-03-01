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
	char a[100000];
	int m,n,i,k,sz[1000],p,s=0;
	gets(a);
	p=strlen(a);
	for(i=0;i<p;i++)
	{
		m=0;
		for(i=i;i<p;i++)
		{
			if(a[i]!=' ')
			{
				m++;
			}
			else 
			{
				break;
			}
		}
		sz[s]=m;
		s++;
	}
	printf("%d",sz[0]);
	for(i=1;i<s;i++)
	{
		if(sz[i]!=0)
		printf(",%d",sz[i]);
	}
	return 0;
}