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

int sushu(int w)
{
	int c,d;
	d=1;
	c=2;
	while(c<=w-1)
	{
		if(w%c==0)
		{
			d=0;
		break;
		}
		c++;
	}
	return d;
}

	int main()
{
	int m,p;
	scanf("%d",&m);
	p=3;
	while(p<=m/2)
	{
		if (sushu(p)&&sushu(m-p))
			printf("%d %d\n",p,m-p);
		p++;
	}
	return 0;
}