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

void substr(char s[],int start,int end)
{
	int a=start,b=end,i;
	while ((end>start)&&(s[start]==s[end]))
	{ 
		start++; end--;
	}
	while(start>end) 
	{
		for(i=a;i<=b;i++) putchar(s[i]);
		start=start-1;
		putchar('\n');
	}
}
void sub(char s[],int start,int end)
{
	int a=start,b=end,i;
	while ((end>start)&&(s[start]==s[end]))
	{ 
		start++; end--;
	}
	while(start>=end) 
	{
		for(i=a;i<=b;i++) putchar(s[i]);
		start=start-1;
		putchar('\n');
	}
}
void main ()
{
	char s[500];
	int m,n,width,start;
	gets(s);
	n=strlen(s);
	for(width=1; width<n; width++)
		for(m=0; m<=n-width;m++)
			if(n%2==0)
				substr(s,m,m+width);
			else
				sub(s,m,m+width);
}