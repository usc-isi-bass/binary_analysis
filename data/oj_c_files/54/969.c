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

int time,k,n;

void calc(int fruit)
{
	
	if (fruit<1)
		time = -2;
	if ((time!=-2)&&(time!=-3))	
		if ((fruit%n==k))
		{
			time --;
			if ((time==0)&&(fruit-fruit/n-k>0))
			{
				time = -3;
			}
			else
			{
				calc(fruit-fruit/n-k);
			}
	}
}
int main()
{
	int i;

	scanf("%d%d",&n,&k);
	for (i=1;;i++)
	{
		time = n;
		calc(i);
		if ((time==-3))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}