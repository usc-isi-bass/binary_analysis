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

int w=1;
int f(int x)
{
	int z=1,y,v=0;
	for(y=w+1;y<=sqrt(x);y++)
	{
		if(x%y==0)
		{
			
			z=z+f(x/y);
			v++;
			w=y;
		}
	}
	if(v==0)
	z=1;
	return z;
}
main()
{
	int n,u=0,a;
	scanf("%d",&n);
	do
	{
		scanf("%d",&a);
		printf("%d\n",f(a));
		u++;
		w=1;
	}
	while(u!=n);
}
