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

main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	printf("%d",b);
	c=a/10;
	if(c!=0)
		printf("%d",c%10);
	d=a/100;
	if(d!=0)
		printf("%d",d%10);
	e=a/1000;
	if(e!=0)
		printf("%d",e);

	return 0;
}