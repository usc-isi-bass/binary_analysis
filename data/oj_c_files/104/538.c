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
	int a, b, c, d;
	scanf("%d %d",&a,&b);
	c=1;
	while(c==1)
	{
		if(a>b)
			a=a/2;
		if(a<b)
			b=b/2;
		if(a==b)
		{
			c=0;
			printf("%d",a);
		}
	}
	return 0;
}

