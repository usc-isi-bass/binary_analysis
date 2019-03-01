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
	int i,k,l,m,ans;
	if (num<0) 
	{
		m=-1;
		num=0-num;
	}
	else m=1;
	k=0;
    while (num!=0)
	{
		k=k*10+num%10;
		num=(num-(num%10))/10;
	}
	ans=k*m;
	return ans;
}

int main()
{
	int r,t;
	for (r=0;r<6;r++)
	{
		scanf("%d",&t);
		printf("%d\n",reverse(t));
	}
}