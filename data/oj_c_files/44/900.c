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

void main()
{
	int reverse(int num);
	int a[6],i;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		printf("%d\n",reverse(a[i]));
}

int reverse(int num)
{
	int n;
	if(-10<num&&10>num)
		n=num;
	else if(-100<num&&100>num)
		n=(num-(num/10)*10)*10+num/10;
	else if(-1000<num&&1000>num)
		n=(num-(num/10)*10)*100+(num/10-(num/100)*10)*10+num/100;
	else if(-10000<num&&10000>num)
		n=(num-(num/10)*10)*1000+(num/10-(num/100)*10)*100+(num/100-(num/1000)*10)*10+num/1000;
	else if(-100000<num&&100000>num)
		n=((long)num-((long)num/10)*10)*10000+(num/10-(num/100)*10)*1000+(num/100-(num/1000)*10)*100+(num/1000-(num/10000)*10)*10+num/10000;
	return (n);
}