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
int a,b=0;
scanf("%d",&a);

 while(a)
 {
  b*=10;
  b+=a%10;
  a/=10;
 }
 printf("\n%d",b);
return 0;
} 