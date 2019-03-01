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
	char man,a[200];
	int len,i,j,k,w[200],m[200],p=0;
	scanf("%s",a);
	len=strlen(a);
	man=a[0];
hell:;
	for(i=0;i<=len-1;i++)
	{
		if(a[i]==man)
		{
			for(j=i+1;j<=len-1;j++)
			{
				if(a[j]==man)
				{
					break;
				}
				if(a[j]!=man&&a[j]!=1)
				{
					a[i]=1;a[j]=1;
					m[++p]=i;w[p]=j;
					goto hell;
				}
			}
		}
	}
	for(k=1;k<=p;k++)
	{
		printf("%d %d\n",m[k],w[k]);
	}

}