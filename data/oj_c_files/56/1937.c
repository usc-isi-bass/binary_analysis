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
	long s,n;
	int a[5];
	scanf("%ld",&n);
	s=n;
	a[0]=s%10;
	s=s-a[0];
	a[1]=(s%100)/10;
	s=s-10*a[1];
	a[2]=(s%1000)/100;
	s=s-100*a[2];
	a[3]=(s%10000)/1000;
	s=s-1000*a[3];
	a[4]=s/10000;

	if (n<10)
	
		printf("%d",a[0]);
	
	else if (n<100)
	
		printf("%1d%1d",a[0],a[1]);
	
	else if (n<1000)
		printf("%1d%1d%1d",a[0],a[1],a[2]);

	else if (n<10000)
		printf("%1d%1d%1d%1d",a[0],a[1],a[2],a[3]);

	else 
		printf("%1d%1d%1d%1d%1d",a[0],a[1],a[2],a[3],a[4]);
}
