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
 int a,b;
 scanf("%d",&a);
 if(a==1)
  printf("End");
 else
 {
  while(a!=1)
 {
  while(a%2==0)
 {
  b=a/2;
  printf("%d/2=%d\n",a,b);             
  a=b;
 }
 while(a%2!=0 && a!=1)
 {
  b=a*3+1;
  printf("%d*3+1=%d\n",a,b);
  a=b;             
 }
 }
 printf("End");
 }     
}