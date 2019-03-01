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

int reverse(int num)
{
	int fnum=0,k=0;
	if(num<0)
	{
		num=-num;
		k=1;
	}
	for(;num!=0;)
	{
		fnum=fnum*10+num%10;
		num=num/10;
	}
	if(k==0)
	return fnum;
	else
		return -fnum;
}
int main()
{
	int num[6];
	for(int i=0;i<6;i++)
	scanf("%d",&num[i]);
	for(int i=0;i<6;i++)
	printf("%d\n",reverse(num[i]));
}