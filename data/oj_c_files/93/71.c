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

main()
{
	int a,b,c,d;
	    a=3;
		b=5;
		c=7;
	scanf("%d",&d);
	if(d%a==0)
	 if(d%b==0)
	  if(d%c==0)
	  printf("%d %d %d",a,b,c);
	  else printf("%d %d",a,b);
	else
		if(d%c==0)
			printf("%d %d",a,c);
         else
			 printf("%d",a);
	else
		if(d%b==0)
			if(d%c==0)
				printf("%d %d",b,c);
			else printf("%d",b);
		else 
			if(d%c==0)
				printf("%d",c);
            else printf("n");
}