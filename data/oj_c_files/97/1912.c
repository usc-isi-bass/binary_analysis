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
{int n,a;
scanf("%d",&n);
printf("%d\n\n",n/100);
 printf("%d\n\n",(n%100)/50); 
 printf("%d\n\n",(n%50)/20);
a=n%50;
 printf("%d\n\n",(a%20)/10);
 printf("%d\n\n",(n%10)/5);
 printf("%d\n\n",n%5);
return 0;
}