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
	char c[150],d[150]={0};
	int i,j,l=11,x;
	for(x=1;x<=10;x++)
	{
		for(i=0;i<=l;i++)
	{		
		c[i]=' ';
		d[i]='\0';
	}
		gets(c);
		l=strlen(c);
		for(i=0;;i++)
		{
			if(c[i]=='\0') break;
			if(c[i]==')')
			{
				for(j=i;j>=0;j--)
				{
					if(c[j]=='(')
					{
						c[j]='!';
						break;
					}
				}
				if(j<0)
				{
					c[i]='?';
					d[i]='?';
				}
			}
		}
		for(i=0;;i++)
		{
			if(c[i]=='(')
			{
				c[i]='!';
				d[i]='$';
			}
			if(c[i]=='\0') break;
		}
		for(i=0;;i++)
		{
			if(c[i]=='\0') break;
			if(c[i]=='!')
				c[i]='(';
			if(c[i]=='?')
				c[i]=')';
			if(d[i]!='$'&&d[i]!='?')
				d[i]=' ';
		}
		puts(c);
		puts(d);
	}
	return 0;
}