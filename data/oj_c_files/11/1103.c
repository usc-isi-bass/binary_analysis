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


int run(int a)
{
	if ( a%4==0 && a%100 !=0 || a%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int y,m,d;
	cin>>y>>m>>d;
	int isr = run(y);
	int p[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int days= 0;
	for (int i = 1;i<m;i++)
	{
		days = days + p[i];
	}
	days = days + d;
	if (isr==1 && m>=3)
		days++;
	cout<<days;
}