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
	int x,y,z;
	scanf("%d %d",&x,&y);
	while(x!=y)
	{
		if(x<y)
		{
			z=x;
			x=y;
			y=z;
		}
		x/=2;
		if(x==y)
		{
			break;
		}
	}
	printf("%d",x);
	return 0;
}