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
	int a;
	scanf("%d",&a);
	int b[5];
	b[0]=a%10;
	b[1]=(a%100-b[0])/10;
	b[2]=(a%1000-a%100)/100;
	b[3]=(a%10000-a%1000)/1000;
	b[4]=(a%100000-a%10000)/10000;
	if(b[1]==0)
	{
		a=b[0]*1;
		printf("%d",a);
	}
	else if(b[2]==0)
	{
		a=b[0]*10+b[1]*1;
		printf("%d",a);
	}
	else if(b[3]==0)
	{
		a=b[0]*100+b[1]*10+b[2]*1;
		printf("%d",a);
	}
	else if(b[4]==0)
	{
		a=b[0]*1000+b[1]*100+b[2]*10+b[3]*1;
		printf("%d",a);
	}
	else
	{
		a=b[0]*10000+b[1]*1000+b[2]*100+b[3]*10+b[4]*1;
		printf("%d",a);
	}
	return 0;
}
