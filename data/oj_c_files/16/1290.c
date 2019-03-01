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
 int x,a,b,c,d;
 scanf("%d",&x);
 a=x%10;
  b=(x%100-a)/10;
  c=(x%1000-b*10-a)/100;
  d=x/1000;
 if (x>999&&x<10000) printf("%d%d%d%d\n",a,b,c,d);
 else if(x>99&&x<1000) printf("%d%d%d\n",a,b,c);
 else if(x>9&&x<100)   printf("%d%d\n",a,b);
 else if (x>0&&x<10)   printf("%d\n",a);
 else if (x==0) printf("0\n");
 else if (x==10000) printf("00001\n");
	 
}

