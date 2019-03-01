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
 int a,b,c,d,e,f,t;
 int s;
 for(s=1;s=1000;s++)
 {
 scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
 if (a==0)
 break;
 else
 {int m,n,p;
 m=(d+12)-a;
 if(b>=e)
 {
  n=b-e;
  if(c>=f)
  {
  p=c-f;
  t=m*3600-n*60-p;
  }
  else
  {
  p=f-c;
  t=m*3600-n*60+p;
  }
 }
 else
 {
        n=e-b;
  if(c>=f)
  {p=c-f;
  t=m*3600+n*60-p;}
  else
  {p=f-c;
  t=m*3600+n*60+p;}
 }
 printf("%d\n", t);
 }
 }
 return 0;
}