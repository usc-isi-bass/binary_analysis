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


int main()
{
	int i,j,w,month[13],week,sum_day=0;
	scanf("%d",&w);
	month[1]=31;
	month[2]=28;
	month[3]=31;
	month[4]=30;
	month[5]=31;
	month[6]=30;
	month[7]=31;
	month[8]=31;
	month[9]=30;
	month[10]=31;
	month[11]=30;
	month[12]=31;
for(j=1;j<13;j++)
	{
		for(i=1;i<366;i++)
		{
			week = (i+w-1)%7;
			if ((i-sum_day)==13 && week==5)
			{
			printf("%d\n",j);
			}
		
		}
			sum_day += month[j];

	}
		
return 0;
}
