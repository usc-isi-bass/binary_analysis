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
	int n,i,s,j,k;
	char c[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s",&c);
		s=strlen(c);
		printf("%s\n",c);
		for(j=0;j<s;j++)
		{
			if(c[j]!='(' && c[j]!=')')
				c[j]=' ';
			if(c[j]==')')
			{
				for(k=j;k>=0;k--)
				{
					if(c[k]=='(')
					{
						c[j]=' ';
						c[k]=' ';
						break;
					}
				}
			}
		}
		for(j=0;j<s;j++)
		{
			if(c[j]=='(')
				c[j]='$';
			if(c[j]==')')
				c[j]='?';
		}
		printf("%s\n",c);
	}
	return 0;
}