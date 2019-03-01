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
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	a=(int)n/100;
     b=(int)(n-a*100)/50;
	 c=(int)(n-a*100-b*50)/20;
	 d=(int)(n-a*100-b*50-c*20)/10;
	 e=(int)(n-a*100-b*50-c*20-d*10)/5;
	 f=n-a*100-b*50-c*20-d*10-e*5;
	printf("%d\n",a);
	printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
	return 0;
}