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
	int m=0,i,j,t,k;
	char a[101],c[101];
	scanf("%d",&t);
	getchar();
	for(k=0;k<t;k++)
	{
		gets(a);
		int l=strlen(a);
		c[l]='\0';
		for(j=0;j<l;j++)
		{
			c[j]=a[j];
			if(a[j]=='(')
				m++;
			if(a[j]!='('&&a[j]!=')')
				c[j]=' ';
		}
		puts(a);
		for(i=0;i<m+1;i++)
		{
			char x=')';
			int y=-1;
			for(j=0;j<l;j++)
			{
				if(c[j]=='('||c[j]==')')
				{
					if(c[j]=='(')
					{}
					else
					{
						if(x=='(')
						{
							c[j]=' ';c[y]=' ';
						}
					}
					y=j;
					x=c[j];
				}
			}
		}
		for(i=0;i<l;i++)
		{
			if(c[i]=='(')
				c[i]='$';
			if(c[i]==')')
				c[i]='?';
		}
		puts(c);
	}
	return 0;
}
