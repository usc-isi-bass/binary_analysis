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

//*************************************
//* ????1.cpp *
//* ??????1200012844 *
//* ?????2012?11?13? *
//* ?????????? *
//**************************************

int main()
{
	int w,i,j,days,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>w;
	for(i=1;i<=12;i++)
	{
		days=12;
		for(j=1;j<i;j++)
		{
			days+=month[j];
		}
		days%=7;
		if((w+days)%7==5)
			cout<<i<<endl;
	}
	return 0;
}