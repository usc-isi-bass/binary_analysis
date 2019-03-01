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
	scanf("%d",&a);
	b=2;
	if(a>1){
	do {c=a%b;
		if(c==1)
	    {
		d=a*3+1;
		printf("%d*3+1=%d\n",a,d);
		a=d;
		}
		else
		{d=a/2;
		   if(d>=1)
		    {printf("%d/2=%d\n",a,d);
		    a=d;}
		   else
		    a=d;
	    }
		
} while(a>1);
  printf("End");
}
  else
  printf("End");
}