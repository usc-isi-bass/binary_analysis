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

int  NO[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int  SP[12]={31,29,31,30,31,30,31,31,30,31,30,31};

int boolean(int year)
{
	if  ((year % 4 == 0 /*&& year % 100 != 0*/) || (year % 400 == 0)) return 1 ;
	   else return 0;
}
void main()
{
	long i,sum,y1,m1,d1,y2,m2,d2;
	scanf("%d%d%d",&y1,&m1,&d1);
	scanf("%d%d%d",&y2,&m2,&d2);
	sum=0;
	for (i=1;i<=m1-1;i++)
		if (boolean(y1)==1)
	      sum=sum-NO[i];
		else sum=sum-SP[i];
	sum=sum-d1;
	for (i=1;i<=m2-1;i++)
	  if (boolean(y1)==1)
	      sum=sum+NO[i];
		else sum=sum+SP[i];
	sum=sum+d2;
	for (i=y1;i<=y2-1;i++)
		if (boolean(i)==1) sum=sum+366;
		else sum=sum+365;
	printf("%ld\n",sum);
}