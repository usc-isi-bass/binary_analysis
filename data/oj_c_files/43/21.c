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


main ()
{
int m,a,b,i,t;
scanf("%d",&m);
 for(a=2;a<=m/2;a++)
 {
  t=0;
  for(i=2;i<a-1;i++)
  {
   if(a%i==0)t=1;
  }
 if(t==0)
 {
 b=m-a;
 t=0;
for(i=2;i<b-1;i++)
  {
   if(b%i==0)t=1;
  }
if(b==1)t=1;
if(t==0)printf("%d %d\n",a,b);
 }
 }
}