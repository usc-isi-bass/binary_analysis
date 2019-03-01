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
	int day,mon[12],i=0,k;

	scanf("%d",&day);

	if((13+day+1)%7==0)
	{mon[i]=1;
	i++;}

	if((13+day+1+31)%7==0)
	{mon[i]=2;
	i++;}

	if((13+day+1+31+28)%7==0)
		{mon[i]=3;
	i++;}

	if((13+day+1+31+28+31)%7==0)
		{mon[i]=4;
	i++;}

	if((13+day+1+31+28+31+30)%7==0)
		{mon[i]=5;
	i++;}

	if((13+day+1+31+28+31+30+31)%7==0)
	{mon[i]=6;
	i++;}

	if((13+day+1+31+28+31+30+30+31)%7==0)
	{mon[i]=7;
	i++;}

	if((13+day+1+31+28+31+30+30+31+31)%7==0)
	{mon[i]=8;
	i++;}

	if((13+day+1+31+28+31+30+30+31+31+31)%7==0)
	{mon[i]=9;
	i++;}

	if((13+day+1+31+28+31+30+30+31+31+31+30)%7==0)
	{mon[i]=10;
	i++;}

	if((13+day+1+31+28+31+30+30+31+31+31+30+31)%7==0)
	{mon[i]=11;
	i++;}

	if((13+day+1+31+28+31+30+30+31+31+31+30+31+30)%7==0)
	{mon[i]=12;
	i++;}

	k=i;

	printf("%d",mon[0]);

	for(i=1;i<k;i++)
		printf("\n%d",mon[i]);

	return 0;
}






