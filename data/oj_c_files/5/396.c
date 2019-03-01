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
	char f[501],t[501];
	int i;
	double j=0,r=0,s=0;
	double n;
	scanf("%lf%s%s",&n,f,t);
	for(i=0;f[i]!='\0';i++)
	{
		j++;
	}
	for(i=0;t[i]!='\0';i++)
	{
		r++;
	}
	if(j!=r)
	{
		printf("error");
		return 0;
	}
    for(i=0;f[i]!='\0';i++)
	{
		if(f[i]!='A'&&f[i]!='T'&&f[i]!='C'&&f[i]!='G')
		{
			printf("error");
			return 0;
		}
	    if(t[i]!='A'&&t[i]!='T'&&t[i]!='C'&&t[i]!='G')
		{
			printf("error");
	        return 0;
		}
	}
	for(i=0;f[i]!='\0';i++)
	{
		if(f[i]==t[i])
		s++;
	}
	if(s/j>n)
	{
		printf("yes");
	}
	if(s/j<=n)
	{
		printf("no");
	}

	return 0;
}

