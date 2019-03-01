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
	char a[101],x;
	int n,i,j=0,m,k,b,g;
	gets(a);
	n=strlen(a);
	x=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]!=x)
		{
			a[i]=j;
			j=j+1;
		}
	}
	for(j=0;j<(n/2);j++)
	{
		for(i=0;i<n;i++)
		{
 			if(a[i]==j)
			{
				for(k=i-1;k>=0;k--)
				{
					if(a[k]==x)
					{
						a[k]=j;
						break;
					}
				}
			}
		}
	}
	for(j=0;j<(n/2);j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==j)
			{
				b=i;
				break;
			}
		}
		for(i=b+1;i<n;i++)
		{
			if(a[i]==j) 
			{
				g=i;
				break;
			}
		}
		printf("%d %d\n",b,g);
	}
	return 0;
} 