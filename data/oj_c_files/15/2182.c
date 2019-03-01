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
 int i,j,n,a,t=0,flag,line=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  flag=0;
  for(j=1;j<=n;j++)
  {
   scanf("%d",&a);
   if(a==0) {t++;flag=1;}
  }
  if(flag==1) line++;
 }
 printf("%d",(line-2)*(t-line*2)/2);
 return 0;
}
