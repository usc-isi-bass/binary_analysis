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
{   int i,n,a[12],s=0;
	

    scanf("%d",&n);

	if((12+n)%7==5)
	{a[s]=1;
	 s=s+1;
	}
	if((3+12+n)%7==5)
	{a[s]=2;
	 s=s+1;
	}
	if((3+12+n)%7==5)
	{a[s]=3;
	 s=s+1;
	}
	if((6+12+n)%7==5)
	{a[s]=4;
	 s=s+1;
	}
	if((1+12+n)%7==5)
	{a[s]=5;
	 s=s+1;
	}
	if((4+12+n)%7==5)
	{a[s]=6;
	 s=s+1;
	}
	if((6+12+n)%7==5)
	{a[s]=7;
	 s=s+1;
	}
	if((2+12+n)%7==5)
	{a[s]=8;
	 s=s+1;
	}
	if((5+12+n)%7==5)
	{a[s]=9;
	 s=s+1;
	}
	if((0+12+n)%7==5)
	{a[s]=10;
	 s=s+1;
	}
	if((3+12+n)%7==5)
	{a[s]=11;
	 s=s+1;
	}if((5+12+n)%7==5)
	{a[s]=12;
	 s=s+1;
	}
	for(i=0;i<s;i++)
	{printf("%d\n",a[i]);}


}
