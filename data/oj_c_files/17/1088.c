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
	int n,i,j,k,m;
	char a[101];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		for(i=0;i<101;i++)
		{
			a[i]=0;
		}
		scanf("%s",a);
		printf("%s\n",a);
		m=strlen(a);
		for(i=0;i<m;i++)
		{
			if((a[i]!='(')&&(a[i]!=')'))
			{
				a[i]=' ';
			}
		}
		for(i=0;i<m;i++)
		{
			if(a[i]==')')
			{
				for(k=i;k>=0;k--)
				{
					if(a[k]=='(')
					{
						a[i]=' ';
						a[k]=' ';
						break;
					}
				}
				if(k==-1) a[i]='?';
			}
		}
		for(i=0;i<m;i++)
		{
			if(a[i]=='(') a[i]='$';
		}
		printf("%s\n",a);
	}
	return 0;
}
