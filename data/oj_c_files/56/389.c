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

int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int x1,x2,x3,x4,x5;
	x1=n%10;
	x2=((n-x1)%100)/10;
	x3=((n-x1-x2*10)%1000)/100;
	x4=((n-x1-x2*10-x3*100)%10000)/1000;
	x5=((n-x1-x2*10-x3*100-x4*1000)%100000)/10000;
    if(x5!=0)
	{
		printf("%d%d%d%d%d",x1,x2,x3,x4,x5);
	}
	else if(x5==0&&x4!=0)
	{
		printf("%d%d%d%d",x1,x2,x3,x4);
	}
	else if(x5==0&&x4==0&&x3!=0)
	{
		printf("%d%d%d",x1,x2,x3);
	}
	else if(x5==0&&x4==0&&x3==0&&x2!=0)
	{
		printf("%d%d",x1,x2);
	}
	return 0;
}