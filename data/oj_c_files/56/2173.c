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
	int b,a[5];
	scanf("%d",&b);
	if((b/10000)>=1)
	{
		a[0]=b/10000;
		a[1]=(b-10000*a[0])/1000;
		a[2]=(b/100)%10;
		a[3]=(b/10)%10;
		a[4]=b%10;
		printf("%d",a[4]*10000+a[3]*1000+a[2]*100+a[1]*10+a[0]);
	}
	else if((b/1000)>=1)
	{   a[1]=b/1000;
		a[2]=(b/100)%10;
		a[3]=(b/10)%10;
		a[4]=b%10;
		printf("%d",a[4]*1000+a[3]*100+a[2]*10+a[1]);
	}
	else if((b/100)>=1)
	{
		a[1]=b/100;
		a[2]=(b/10)%10;
		a[3]=b%10;
		printf("%d",a[3]*100+a[2]*10+a[1]);
	}
	else if(b<100)
	{
		a[1]=b/10;
		a[2]=b%10;
		printf("%d",a[2]*10+a[1]);
	}
	return 0;
}