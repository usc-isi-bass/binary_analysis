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
	int i,a,b,c,d,e,t;
	scanf("%d",&i);
	if(10<i<1e5)
	  a=i/10000;
	  b=i/1000-a*10;
	  c=i/100-a*100-b*10;
	  d=i/10-a*1000-b*100-c*10;
	  e=i-a*10000-b*1000-c*100-d*10;
	if(a!=0&&b!=0&&c!=0&&d!=0&&e!=0)
      t=e*10000+d*1000+c*100+b*10+a;
	else if(a==0&&b!=0&&c!=0&&d!=0&&e!=0)
	  t=e*1000+d*100+c*10+b;
	else if(a==0&&b==0&&c!=0&&d!=0&&e!=0)
      t=e*100+d*10+c;
	else if(a==0&&b==0&&c==0&&d!=0&&e!=0)
	  t=e*10+d;
    printf("%d\n",t);
}
