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
	int y1,m1,d1;
	int y2,m2,d2;
	int ds1,ds2;
	int sum=0;
	int i;
	scanf("%d %d %d",&y1,&m1,&d1);
	scanf("%d %d %d",&y2,&m2,&d2);
	for(i=y1;i<y2;i++)
	{
		if((i%100!=0&&i%4==0)||(i%400==0))
			sum=sum+366;
		else
			sum=sum+365;
	}
	int days(int x,int y, int z);
	ds1=days(y1,m1,d1);
	ds2=days(y2,m2,d2);
	sum=sum+ds2-ds1;
	printf("%d",sum);
	return 0;
}
int days(int x,int y,int z)
{
	int sum=0;
	int Months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if((x%100!=0&&x%4==0)||(x%400==0))
			Months[1]++;
		y--;
		while(y--)
		{
			sum=sum+Months[y];
		}
		sum=sum+z;
		return sum;
}