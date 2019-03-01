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
 int m,k,n,i,p,q=1;
 scanf("%d %d",&n,&k);
 p=n;
 for(i=1;i<=n;i++)
 { 
  q=q*n;
 }
 m=q-p*k+k;
 printf("%d",m);
}