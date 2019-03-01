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


int reverse(int num,int a)
{
	a=10*a+num%10;
	if(num>9||num<-9) return (reverse(num/10,a));
	return a;
}

int main()
{
	int num,i;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&num);
		printf("%d\n",reverse(num,0));
	}
		return 0;
}
