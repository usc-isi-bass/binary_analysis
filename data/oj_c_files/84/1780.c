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
	int a,i,b,first,second,c,d;
	scanf("%d",&a);
	scanf("%d%d",&c,&d);
	if (c>d)
		first=c;
	    second=d;
	if (c<d)
		first=d;
	    second=c;
    for(i=3;i<=a;i++)
	{
        scanf("%d",&b);
		if(b>first)
		{
			second=first;
			first=b;
		}
		else if(b>second)
			second=b;
	}
	printf("%d\n%d",first,second);
	return 0;
}
