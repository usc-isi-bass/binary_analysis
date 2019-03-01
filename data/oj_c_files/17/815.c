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
	int n,length,k;
	scanf("%d",&n);
	getchar();
	int i;
	char a[500];
	for(i=1;i<=n;i++)
	{
		gets(a);
		puts(a);
		length=strlen(a);
		int j;
		for(j=length-1;j>=0;j--)
		{
			int judge=0;
			if(a[j]!='('&&a[j]!=')')
				a[j]=' ';
			else if(a[j]=='(')
			{
				for(k=j+1;k<length;k++)
				{
					if(a[k]==')')
					{
						a[k]=' ';
						a[j]=' ';
						judge=1;
						break;
					}
				}
				if(judge==0)
					a[j]='$';
			}
		}
		for(j=0;j<length;j++)
		{
			if(a[j]==')')
				a[j]='?';
		}
		puts(a);
	}
}
