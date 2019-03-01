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

int turn(int a,int b)
{
	int i,k;
	if(a==b)
		k=a;
	if(a>b)
	{
		k=turn(a/2,b);
	}
	if(a<b)
	{
		k=turn(a,b/2);
	}
	return k;
}
void main()
{
	int a,b;
		scanf("%d%d",&a,&b);
		printf("%d",turn(a,b));
}