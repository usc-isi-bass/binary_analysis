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

void change(char str[])
{
	int n,i;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='(')
			str[i]='$';
		else if(str[i]==')')
			str[i]='?';
		else
			str[i]=' ';
	}
}
void match(char str[])
{
	int n,i,k;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]==')')
		{
			for(k=i;k>=0;k--)
			{
				if(str[k]=='(')
				{
					str[k]=' ';
					str[i]=' ';
					k=-1;
				}
			}
		}
	}
}
int main()
{
	char a,string[100];
	while(gets(string))
	{
		puts(string);
		match(string);
		change(string);
		puts(string);
	}
	return 0;
}