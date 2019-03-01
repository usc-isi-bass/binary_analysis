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


int reverse(int a)
{
  int c=0;
  while(a)
  {
       c=c*10+a%10;
	   a=a/10;
 }
  return c;
}

main()
{
  int a,i;
  for(i=0;i<6;i++)
  {
	 scanf("%d",&a);
	 printf("%d\n",reverse(a));
  }
  
}