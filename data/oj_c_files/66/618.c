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
	int m1[12]={31,28,31,30,31,30,31,31,30,31,30};
	int m2[12]={31,29,31,30,31,30,31,31,30,31,30};
	long int y;
	int i,j,sum=0,m,d;
	char week[8][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun"};
	scanf("%ld %d %d",&y,&m,&d);
	if ((y%4==0&&y%100!=0)||(y%400==0))
	{
		for (i=0;i<m-1;i++)
			sum+=m2[i];
		sum+=d-1;
	}
	else
	{
		for (i=0;i<m-1;i++)
			sum+=m1[i];
		sum+=d-1;
	}
y=y-1;
	sum=sum+y+y/4-y/100+y/400;
	j=sum%7;
	printf("%s\n",week[j]);
return 0;
}


