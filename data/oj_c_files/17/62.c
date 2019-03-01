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
	char s[101];
	int i,l,j;
	while(gets(s)!=0)
	{    puts(s);
printf("\n");
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]==')')
			{
				for(j=i-1;j>=0;j--)
				{
					if(s[j]=='(')
						break;
				}
				if(j>=0)
				{
					s[i]=' ';
					s[j]=' ';
				}
			}
		}
		for(i=0;i<l;i++)
		{
			if(s[i]=='(')
				s[i]='$';
			else if(s[i]==')')
				s[i]='?';
			else s[i]=' ';
		}
		puts(s);
		printf("\n");
	}
	
	return 0;
}
