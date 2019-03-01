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
 int x,a,b,c,d,e;
 scanf("%d",&x);
 a=x%10;
 b=(x%100-a)/10;
 c=(x%1000-b*10-a)/100;
 d=(x%10000-c*100-b*10-a)/1000;
 e=(x%100000-d*1000-c*100-b*10-a)/10000;
 if(e!=0) printf("%d%d%d%d%d",a,b,c,d,e);
 if((e==0) && (d!=0)) printf("%d%d%d%d",a,b,c,d);
 if((e==0) && (d==0) && (c!=0)) printf("%d%d%d",a,b,c);
 if((e==0) && (d==0) && (c==0) && (b!=0)) printf("%d%d",a,b);
 if((e==0) && (d==0) && (c==0) && (b==0)) printf("%d",a);
 
}
