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
	char str[101],p,q;
	int b[50],g[50],i,l,j=0,e,k,r;
	scanf("%s",str);
	l=strlen(str);
	p=str[0];
	for(i=1;i<l;i++)
	{
		if(str[i]!=p)
		{
			q=str[i];
			break;
		}
	}
	for(r=1;;r++)
	{
		if(j==l/2) break;
		else
		{
			for(i=0;i<l;i++)
			{
				if(str[i]==p&&str[i+r]==q)
				{
					str[i]='0';
					str[i+r]='0';
					b[j]=i;
					g[j]=i+r;
					j++;
				}
			}
		}
	}
	for(i=0;i<j;i++)
	{
		for(k=j-1;k>=i;k--)
		{
			if(g[k]<g[k-1])
			{
				e=g[k];
				g[k]=g[k-1];
				g[k-1]=e;
				e=b[k];
				b[k]=b[k-1];
				b[k-1]=e;
			}
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d %d\n",b[i],g[i]);
	}
	return 0;
}