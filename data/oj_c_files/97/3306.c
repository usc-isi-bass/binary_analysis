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
	int m,a,b,c,d,e,f;
	scanf("%d",&m);
	a=(m/100)%10;
		b=((m-a*100)/50)%50;
		c=((m-a*100-b*50)/20)%20;
		d=((m-a*100-b*50-c*20)/10)%10;
		e=((m-a*100-b*50-c*20-d*10)/5)%10;
		f=m-a*100-b*50-c*20-d*10-e*5;
		printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
		return 0;
}