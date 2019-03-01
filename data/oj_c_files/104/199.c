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

void find(int x,int y)
{
	if(x==y)
		printf("%d\n",x);
	else if(x>y)
		find(x/2,y);
	else
		find(x,y/2);	
}
void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	find(x,y);
}

