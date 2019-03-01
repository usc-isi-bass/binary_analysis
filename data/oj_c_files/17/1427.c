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
	int n;
	scanf("%d",&n);
	char c[10000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",c);
		printf("%s\n",c);
	    int j,x;
		x=strlen(c);
		for(j=0;j<x;j++)
		{
			if(c[j]!='('&&c[j]!=')')
			{
				c[j]=' ';
			}
		}
		for(j=0;j<x;j++)
		{
			if(c[j]==')')
			{
				int m;
				for(m=j;m>=0;m--)
				{
					if(c[m]=='(')
					{
						c[m]=' ';
						c[j]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<x;j++)
		{
			if(c[j]=='(')
			{
				c[j]='$';
			}
			else if(c[j]==')')
			{
				c[j]='?';
			}
		}
		printf("%s\n",c);
	}
	return 0;
}


