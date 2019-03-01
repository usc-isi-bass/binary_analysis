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

int match(char c[],int n)
{
	for(int i=n+1;i<strlen(c);i++)
	{
		if(c[i]==')')
		{
			c[i]=' ';
			c[n]=' ';
			return i;
		}
		else if(c[i]=='(')
		{
			i=match(c,i);
		}
	}
	c[n]='$';
	return strlen(c)-1;
}
int main()
{
	char ch[110];
	while(cin>>ch)
	{
		cout<<ch<<endl;
		for(int i=0;ch[i]!=0;i++)
			if(ch[i]!='('&&ch[i]!=')')
				ch[i]=' ';
		for(int i=0;ch[i]!=0;i++)
		{
			if(ch[i]=='(')
				i=match(ch,i);
			else if(ch[i]==')')
				ch[i]='?';
		}
		cout<<ch<<endl;
	}
	return 0;
}