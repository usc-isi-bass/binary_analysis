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


int main(int argc, char* argv[])
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int n=0;
	static int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i=0;i<month;i++)
	{
		n=days[i]+n;
	}
	n=day+n;
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
		n++;
	printf("%d\n",n);
	return 0;
}
