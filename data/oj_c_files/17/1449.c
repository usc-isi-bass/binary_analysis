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

main()
{
	
	char a[101];
	int l,i,j,n;
while(scanf("%s",a)!=EOF)
	{
	
	l=strlen(a);
	puts(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!='('&&a[i]!=')')
			a[i]=' ';
		else
		{
			if(a[i]==')')
			{
				n=0;
				for(j=i-1;j>=0;j--)
				{
					if(a[j]=='(')
					{
						a[i]=' ';
						a[j]=' ';
						n++;
						break;
					}
				}
				if(n==0)
					a[i]='?';
			}
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]=='(')
			a[i]='$';
	}
	puts(a);}
	return 0;
}
