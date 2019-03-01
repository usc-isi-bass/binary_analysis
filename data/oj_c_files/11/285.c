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

void main()
{
	int a,b,c,d,i;
	int j=1;
	while(j<=5)
	{
	scanf("%d %d %d",&a,&b,&c);
	i=1;
	d=0;
	while(i<b)
	{
		if (i==1||i==3||i==5||i==7||i==8||i==10)
			d=d+31;
		else if (i==2)
		{
			if (a%4==0&&a%100!=0||a%400==0)
				d=d+29;
			else d=d+28;
		}
		else if (i==4||i==6||i==9||i==11) d=d+30;
		i=i+1;
	}
	d=d+c;
	printf("%d\n",d);
	j++;
	}
}