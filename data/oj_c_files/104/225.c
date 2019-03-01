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

void check(int x,int y)
{
	if(x==y)
		printf("%d",x);
	else
	{
		if(x>y&&x/2>=y/2)
			check(x/2,y);
		if(x<y&&x/2<=y/2)
			check(x,y/2);
	}
}
main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	check(x,y);
}