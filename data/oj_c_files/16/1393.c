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

	int a,c,d;
	scanf("%d",&a);
	c=a;
	while(c>=1)
	{
	d=c-(c/10)*10;
	c=c/10;
	printf("%d",d);
	
	}
	if (a==0)
	printf("0");
	return 0;
}