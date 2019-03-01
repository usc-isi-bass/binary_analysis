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
	int a,b,c;
	scanf("%d",&a);
	b=0;
	for(c=a%10;a>0;)
	{
		b=b*10+c;
		a=(a-c)/10;
		c=a%10;
	}
	printf("%d",b);
}
	
