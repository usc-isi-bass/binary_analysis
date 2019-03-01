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

void main()
{
 int a,b,c,d,e,i,n;
 a=3;b=5;
 scanf("%d",&n);
 if(n<5) printf("empty");
while(b<=n)
 {
 for(i=2;i<(a+1)/2;i++)
 {
  if((a%i)==0) goto loop;
 }
  for(i=2;i<(b-1)/2;i++)
 {
  if((b%i)==0) goto loop;
  }
 printf("%d %d\n",a,b);
 loop:
 a=a+2;
 b=b+2;
 }

}