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

int sushu(int a)
{
	int b;
	int t;
    t=1;
	for(b=3;b<=sqrt(a);b=b+2)
	{
		if(a%b==0)
		{
			t=0;
			break;
		}
	}
	return t;//1shisushu,0shiheshu
}
void main()
{
	int n;
	scanf("%d",&n);
	int c,b,a;
	for(c=6;c<=n;c=c+2)
	{
		for(a=3;a<=n/2;a=a+2)
		{
			if(sushu(c-a)&&sushu(a))
			{
				printf("%d=%d+%d\n",c,a,c-a);
				break;
			}
		}
	}
}