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
	int x,y=0;
	scanf("%d",&x);
	if(x<10)
		printf("%d",x);
	else
	{
	while(x>0)
	{
		y=x%10+10*y;
			x=x/10;
	}
	if(x%10!=0)
	printf("%d",y);
	else
	printf("%03d",y);
	}
	return 0;
}
