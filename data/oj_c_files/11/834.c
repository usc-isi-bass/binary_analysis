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
	int y,m,d,sum,i;
    scanf("%d %d %d",&y,&m,&d);
	sum=0;
    for (i=1;i<m;i++)
		if ((i==1) || (i==3) || (i==5) || (i==7) || (i==8) || (i==10))
			sum=sum+31;
		else if (i==2)
			if (((y%4==0) && (y%100!=0)) || (y%400==0))
				sum=sum+29;
			else sum=sum+28;
		else sum=sum+30;
    sum=sum+d;
	printf("%d\n",sum);
	return 0;
}
