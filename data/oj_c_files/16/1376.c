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
	int a;
	scanf("%d",&a);
        int x,y;
	x=a%10;
	y=a/10;
	printf("%d",x);
	while(y>0)
	{
		x=y%10;
		y=y/10;
		printf("%d",x);
	}
}
