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
	int n,i,j,k,a,b,x,y;
	double l,z;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	l=1.0*y/x;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&a,&b);
		z=1.0*b/a;
		if(z>l&&z-l>=0.05)
		{
			printf("better\n");
		}
		else if(z<l&&l-z>=0.05)
		{
			printf("worse\n");
		}
		else{printf("same\n");}

	}
	return 0;

}