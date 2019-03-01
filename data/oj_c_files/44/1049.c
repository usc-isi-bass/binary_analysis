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
	int i=0,mun=0,a[10]={0},flag=0;
	if(num<0)
	{
		flag=1;
		num=-num;
	}
	while(num>0)
	{
		a[i]=num%10;
		num=(num-a[i])/10;
		mun=mun*10+a[i];
		i++;
	}
	if(flag)return -mun;
	else return mun;
}
int main()
{
	int i,a[100]={0};
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",reverse(a[i]));
	}
	return 0;
}
