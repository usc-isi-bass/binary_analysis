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

void f(char c[],char str[],int n)
{
	int a,i,j;
	for(i=0;i<=n-1;i++)
	{
		if(c[i]=='(')
		{
			a=1;
			for(j=i+1;j<=n-1;j++)
			{
				if(c[j]=='(') a++;
				else if(c[j]==')') a--;
				if(a==0) break;
			}
			if(a>0) str[i]='$';
		}
		if(c[i]==')')
		{
			a=-1;
			for(j=i-1;j>=0;j--)
			{
				if(c[j]==')') a--;
				else if(c[j]=='(') a++;
				if(a==0) break;
			}
			if(a<0) str[i]='?';
		}
	}
}
int main()
{
	int r=0;
	while(r<=5)
	{
		char c[110]={0},str[110]={0};
		int n,i;
		gets(c);
		n=strlen(c);
		for(i=0;i<=n-1;i++)
			str[i]=' ';
		f(c,str,n);
		puts(c);
		puts(str);
		r++;
	}
	return 0;
}