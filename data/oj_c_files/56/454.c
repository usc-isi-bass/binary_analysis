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
    int a,i=0,A,B,C,D,E;
   

	scanf("%d",&a);
	
		A=a/10000;
	B=(a-A*10000)/1000;
	C=(a-A*10000-B*1000)/100;
	D=(a-A*10000-B*1000-C*100)/10;
	E=(a-A*10000-B*1000-C*100-D*10)/1;
	if (a>9999)
	{i=A+B*10+C*100+D*1000+E*10000;}
	else if (a<10000&&a>999)
	{i=B*1+C*10+D*100+E*1000;}
		else if (a<1000&&a>99)
	{i=C*1+D*10+E*100;}
	printf("%d\n",i);
	return 0;
}
