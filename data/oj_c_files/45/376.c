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
	int m,n,i,j;
	char b[50],d[50];
	int pp(char f[],char g[]);
	scanf("%s",&b);
	scanf("%s",&d);
	m=pp(d,b);
	printf("%d",m);
}
pp(char a[],char b[])
{
	int m,n,i,j,k,t=1;
	char c[50];
	m=strlen(a);
	n=strlen(b);
	for (i=0;i<=m-n;i++)
		{
			for(j=0;j<n;j++)
			{
				c[j]=a[j+i];
			}
			for (t=1,j=0;j<n;j++)
			{
                 if (c[j]!=b[j])
					 t=0;
			}
			if(t==1)
			{k=i;
			goto hell;
			}
		}
hell:;
	 return(k);
}