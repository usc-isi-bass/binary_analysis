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

void main()
{
	void f(char c[],char,char,int);
	char c[1000],a,b,n;
	scanf("%s",c);
	n=strlen(c);
	a=c[0];
	b=c[n-1];
	f(c,a,b,n);

}


void f(char c[],char a,char b,int n)
{
	int i,nan,nv,k;
	for (i=0;i<n;i++)
	{
		if (c[i]==b)
		{
			nan=0;nv=0;
			for (k=i;k>=0;k--)
			{
				if (c[k]==a) nan++;
				else if (c[k]==b) nv++;
				if (nan==nv) 
				{
					printf("%d %d\n",k,i);
					break;
				}
			}
		}
	}
}
