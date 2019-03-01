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
 int n,i,r,t;
 scanf("%d",&n);
 if(n>=5)
{
 for(i=3;i<=n-2;i++)
  {
    for(r=2;r<i+1;r++)
    {if(i%r==0)
    break;}
    if(i==r)
  {  t=i+2;
   for(r=2;r<t+1;r++)
   {  
     if(t%r==0)
     break;
   }
   if(t==r)
   printf("%d %d\n",i,t);
     
  }}
}
  else printf("empty");
}
