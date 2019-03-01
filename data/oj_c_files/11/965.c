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

int main ()
{
	int y,m,d;
	int mth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int leap;
	int sum=0;
	int i;

	cin>>y>>m>>d;
	if((y%400==0) || (y%100!=0) && (y%4==0))
		leap=1;
	else
		leap=0;
	if(leap)
		mth[2]=29;

	for(i=1;i<=m-1;i++)
		sum=sum+mth[i];


	sum=sum+d;

	cout<<sum;
	return 0;
}




