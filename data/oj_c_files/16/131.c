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
	int a,b,c,d,e;
    scanf("%d",&a);
	b=a/1000;
	c=(a-b*1000)/100;
	d=(a-b*1000-c*100)/10;
	e=a-b*1000-c*100-d*10;	
	if(1000<=a&&a<=10000)
      printf("%d%d%d%d",e,d,c,b);
	else
		if(100<=a&&a<1000)
			printf("%d%d%d",e,d,c);
		else
			if(10<=a&&a<100)
				printf("%d%d",e,d);
			else 
				printf("%d",e);

	return 0;
}