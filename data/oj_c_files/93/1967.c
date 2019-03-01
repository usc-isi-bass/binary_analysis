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

void main()
{
 int a,b,c,d;
scanf("%d",&d);
 a=3;
 b=5;
 c=7;
if(d%3==0&&d%5==0&&d%7==0) printf("%d %d %d",a,b,c);
else if(d%3!=0&&d%5!=0&&d%7!=0) printf("n");
else if(d%3==0&&d%5!=0&&d%7!=0) 
	 printf("%d",a);
else if (d%3!=0&&d%5==0&&d%7!=0)
	 printf("%d",b);
else if (d%3!=0&&d%5!=0&&d%7==0)
	 printf("%d",c);
else if(d%3==0&&d%5==0&&d%7!=0)
	 printf("%d %d",a,b);
else if(d%3==0&&d%5!=0&&d%7==0)
	 printf("%d %d",a,c);
else if(d%3!=0&&d%5==0&&d%7==0)
	 printf("%d %d",b,c);
}
