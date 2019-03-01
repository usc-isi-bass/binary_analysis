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
	int a,b,c,i;
	a=0;
	b=0;
	for (i=1;i<100;i++)
	{
	scanf("%d",&c);
	if(c>a)
		b=a,
		a=c;
	   
	else if(c<a&&c>=b)
		b=c;
else if(c=a)
c=a;
	}

printf("%d\n",a);
printf("%d\n",b);
return 0;
}
