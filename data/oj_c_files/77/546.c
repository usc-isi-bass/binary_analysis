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


void f(char a[], int l,char girl, char boy)
{
	if(a[0]!='.')
	{
		int i,j;
		for(i=1;i<l;i++)
		{
			if(a[i]==girl)
			{
				a[i]='.';
				for(j=i-1;j>=0;j--)
				{
					if(a[j]==boy)
					{a[j]='.';
					 printf("%d ", j);
					 j=-1;}
				}
				printf("%d\n", i);
				f(a,l,girl,boy);
				i=l;
			}
		}
	}
}

void main()
{
	char a[100];
	gets(a);
	int l;
	l=strlen(a);
	f(a,l,a[l-1],a[0]);
}
