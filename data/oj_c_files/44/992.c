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
  int a,c,i,b[6];
  for(i=0;i<6;i++)
  {
	 scanf("%d",&a);
	 c=0;
     while(a)
	 {
       c=c*10+a%10;
	   a=a/10;
	 }
     b[i]=c;
  }
  
  for(i=0;i<6;i++)
	  printf("%d\n",b[i]);
}