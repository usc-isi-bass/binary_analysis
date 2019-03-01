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
	int number,i,m,x[5];
	scanf("%d",&number);
	if (number<=9) i=1;
	else if(number<=99) i=2;
	else if(number<=999) i=3;
	else if(number<=9999) i=4;
	else i=5;
	for(m=0;m<=i-1;m++)
		{
		x[m]=number%10;
	    number=(number-x[m])/10;
	     }
	for(m=0;m<=i-1;m++)
		printf("%d",x[m]);

	return 0;
	
}