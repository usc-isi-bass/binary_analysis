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

int yu7wuguan(int number)
{
	if(number%7==0)
		return 0;
	for(int num=number;num>0;num/=10)
	{
		if(num%10==7)
			return 0;
	}
	return 1;
}
int yu7wuguan(int);
int main()
{
	int num,result=0;
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		if(yu7wuguan(i))
			result += i*i;
	}
	printf("%d",result);
	return 0;
}