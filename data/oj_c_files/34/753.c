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
 int i,n;
 scanf("%d",&n);
 for(i=n;i!=1;)
 {
  if(n==1)
  {
 printf("End");
  break;
 }
  if(i%2==0)
  {
  printf("%d/2=%d\n",i,i/2);
  i=i/2;
  }
  else
  {
   printf("%d*3+1=%d\n",i,i*3+1);
   i=i*3+1;
   }
  }
 printf("End");
}

 