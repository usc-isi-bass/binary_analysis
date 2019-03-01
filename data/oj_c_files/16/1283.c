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
int a,b,c,d,e,x;
scanf("%d",&x);
e=x/10000;
d=(x-e*10000)/1000;
c=(x-e*10000-d*1000)/100;
b=(x-e*10000-d*1000-c*100)/10;
a=x-e*10000-d*1000-c*100-b*10;
if(x<10)
printf("%d",a);
else if(x<100)
printf("%02d",10*a+b);
else if(x<1000)
printf("%03d",100*a+10*b+c);
 else if(x<10000)
 printf("%04d",1000*a+100*b+10*c+d);
else if(x==10000)
printf("00001");
return 0;
}