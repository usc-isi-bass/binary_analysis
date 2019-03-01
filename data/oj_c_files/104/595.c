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

int com(int x, int y)
{
	int t;
	if(x==y) t=x;
	else 
		t=(x>y)?com(x/2,y):com(x,y/2);
	return t;
}
void main ()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",com(x,y));
}

	