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
  int d(int x);
  int n,i,a,b;  
  scanf("%d",&n);
  if(n<5)
  printf("empty");
  else
  {
      for(i=3;i<(n-1);i+=2)
  {
  a=d(i);
  b=d(i+2);
  
  if(a==0&&b==0)
  printf("%d %d\n",i,i+2);
 
  }
}
  
  }
   
   int d(int x)
{
    int t;
   
    for(t=2;t<x;t++)
    {
    if(x%t==0) 
    {return 1;break;}
    } 
    if(t>=x) return 0 ;
       }