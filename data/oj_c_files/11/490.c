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
	int a,b,c,i,d=0;
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<b;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
          d=d+31;
		else
			d=d+30;
	}
	if(i<=2)
		d=d;
	else if(a%400==0||(a%4==0&&a%100!=0))
		d=d-1;
	else
		d=d-2;
	d=d+c;
	printf("%d",d);
	return 0;
}
