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

void kuohao(char c[])
{
	int i,j,n;
	for(n=0;c[n]!='\0';n++);//???????
	for(i=n-1;i>=0;i--)
	{
		if(c[i]=='(')
		{
			for(j=i+1;c[j]!='\0';j++)
				if(c[j]==')')
				{c[i]=c[j]=' ';break;}
			if(c[j]=='\0')//??????????????????????$
			{c[i]='$';}
			kuohao(c);//????
		}
	}
}

int main()
{
	char c[110]={'\0'};
	int i;
	while(cin.getline(c,101))
	{cout<<c<<endl;
	for(i=0;c[i]!='\0';i++)
		if(c[i]!='('&&c[i]!=')')
			c[i]=' ';//????????????
	kuohao(c);
	for(i=0;c[i]!='\0';i++)
		if(c[i]==')')
			c[i]='?';//???????????
	cout<<c<<endl;}
	return 0;
}
