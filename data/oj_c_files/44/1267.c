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

//#include<stdafx.h>

int reverse(int num)
{
	int y,z=0;

	if(num>0)
	{
		while(num>=1)
		{
                           y=num%10;
			z=10*z+y;
			num=num/10;
		}
	}
         else if(num==0) z=0;
	else
	{
		num=-num;
		while(num>=1)
		{
                            y=num%10;
			z=10*z+y;
			num=num/10;
		}
		z=-z;
	}
	return z;
}

void main()
{
	int a[6],i;

	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",reverse(a[i]));
	}
}