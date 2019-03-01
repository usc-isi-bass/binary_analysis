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

int main(){
  int x[100],y[100];
  int i,n,j;
  scanf("%d",&n);
  for(i=0,j=n-1;i<n;i++,j--)
   {scanf("%d",&x[i]);
    y[j]=x[i];}
  for(j=0;j<n-1;j++)
   {printf("%d ",y[j]);}
   printf("%d",y[n-1]);
   return 0;
}
