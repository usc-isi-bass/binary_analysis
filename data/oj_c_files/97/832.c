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
 int n;
 scanf("%d",&n);
 int bai,wushi,ershi,shi,wu,yi;
 int yu1,yu2,yu3,yu4,yu5;
 bai=(n-n%100)/100;

 yu1=n-bai*100;
 if(yu1>=50)
 {
  wushi=1;
 }
 else
 {
  wushi=0;
 }

 yu2=yu1-wushi*50;
 ershi=(yu2-yu2%20)/20;

 yu3=yu2-ershi*20;
 shi=(yu3-yu3%10)/10;

 yu4=yu3-shi*10;
 wu=(yu4-yu4%5)/5;

 yu5=yu4-wu*5;
 yi=yu5;

 printf("%d\n",bai);
 printf("%d\n",wushi);
 printf("%d\n",ershi);
 printf("%d\n",shi);
 printf("%d\n",wu);
 printf("%d\n",yi);
    return 0;
}

