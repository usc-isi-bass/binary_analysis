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
    int x,y;
	scanf("%d %d",&x,&y);
    while(x!=y)
	{
	if(x<y)
    y=y/2;
	else if(x>y)
	x=x/2;
	}
	printf("%d\n",x);
}
