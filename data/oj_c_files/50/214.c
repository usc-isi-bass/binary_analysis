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

int f(int w,int m,int d)
{
	int i,x=d-1;
	for(i=1;i<m;i++)
	{
		if(i==2)x=x+28;
		else if(i<8)x=x+30+i%2;
		else x=x+31-i%2;
	}
	x=(w+x%7)%7;
	return(x);
}
void main()
{
	int w,i;
	scanf("%d",&w);
	for(i=1;i<=12;i++)
	{
		if(f(w,i,13)==5)printf("%d\n",i);
	}
}
