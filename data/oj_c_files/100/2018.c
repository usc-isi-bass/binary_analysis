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
	char zfc[310];
	int a,b,c,d;
	char m,n;
	int i;

	d=0;
	
	gets(zfc);
    a=strlen(zfc);
	for(m='A';m<='Z';m++)
	{
		b=0;
		for(i=0;i<a;i++)
		{
			if(zfc[i]==m)
			{
			    b++;
			}
		}
		
		if(b>0)
		{
			printf("%c=%d\n",m,b);
			d++;
		}
		
	}
	for(n='a';n<='z';n++)
	{
		c=0;
		for(i=0;i<a;i++)
		{
			if(zfc[i]==n)
			{
				c++;
			}
		}
		
		if(c>0)
		{
			printf("%c=%d\n",n,c);
			d++;
		}
		
	}
	if(d==0)
	{
		printf("No");
	}

	return 0;
}
