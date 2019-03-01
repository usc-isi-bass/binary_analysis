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
	char s[300],a[100],b[100];
	int i,j,n,m1,m2,x=-1,y=0;
	scanf("%s%s%s",s,a,b);
	n=strlen(s);
	m1=strlen(a);
	m2=strlen(b);
	for(i=0;i<=n-m1;i++)
	{
		if(s[i]==a[0])
		{
			y=1;
			for(j=1;j<m1;j++)
			{
				if(s[i+j]!=a[j])
				{
					y=0;
					break;
				}
			}
		}
		if(y==1)
		{
			x=i;
			break;
		}
	}
	if(x==-1)printf("%s\n",s);
	else 
	{
         for(i=0;i<x;i++)
			 printf("%c",s[i]);
		 printf("%s",b);
		 for(i=x+m1;i<n;i++)
			 printf("%c",s[i]);
		 printf("\n");
	}
}