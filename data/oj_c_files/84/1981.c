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


int main(int argc, char* argv[])
{
	int n,i,p,x,y;
	x=y=0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		{scanf("%d",&p);
		if (p>x ){
			y=x;
			x=p;}
		else 
			if(p>y)
				y=p;
				}
	printf("%d\n%d",x,y);
	return 0;
}
