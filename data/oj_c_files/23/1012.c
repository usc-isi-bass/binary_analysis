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

void main()
{
	int k,i,n=0,t;
	char *p,a[100];
	p=a;
    gets(p);

	

	for(i=0;i<99;i++)
	{ 
		if((*(p+i))!='\0')
	     n++;
		else 
			break;
	}

	for(k=n-1;k>=0;k--)
	{
		if(*(p+k)==' ')
	{
			for (t=k+1;t<n;t++)
			{printf("%c",*(p+t));}
             printf(" ");
		     n=k;
	}
	}
	for(t=0;t<n;t++)
	{printf("%c",*(p+t));}
		
}