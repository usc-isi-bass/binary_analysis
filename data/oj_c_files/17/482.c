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

//Patricia.Xiao
//????????
char a[110];
int match(int i)
{
	int j;
	int l=strlen(a);
	if(i==l)
		return 0;   //??
	if(a[i]=='?')   //????
	{
		for(j=i-1;j>=0;j--)
		{
			if(a[j]=='$')
			{
				//printf("%d %d\n",i,j);  //debug
				a[j]=' ';
				a[i]=' ';
				break;   //????????????????else?????bug?
			}
		}
	}
	match(i+1);
	return 0;
}
int main()
{
	int l;
	int i;
	while(scanf("%s",a)!=EOF)
	{
		printf("%s\n",a);
		l=strlen(a);
		for(i=0;i<l;i++)   //??
		{
			if(a[i]=='(')
				a[i]='$';
			else
				if(a[i]==')')
					a[i]='?';
				else
					a[i]=' ';
		}
		match(1);
		printf("%s\n",a);
	}
	return 0;
}
