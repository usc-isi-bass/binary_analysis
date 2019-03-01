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
	int year;
	int month;
	int day;
	int data1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int data2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int in = 0;
	scanf("%d %d %d",&year,&month,&day);
	if ( year%4 == 0 || year%100 == 0 && year%400 == 0)
	{
		int i = month - 1;
		for (; i >= 0; i--)
		{
			in += data2[i];
		}
		in += day;
	}
	else
	{
		int i = month - 1;
		for (; i >= 0; i--)
		{
			in += data1[i];
		}
		in += day;
	}
	printf("%d\n",in);
	return 0;
}