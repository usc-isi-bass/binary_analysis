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
 int n,a,max,i,max2;
 scanf("%d",&n);
 i=1;
    while(i<=n){
  scanf("%d",&a);
  if(a>max){
   max2=max;
   max=a;
  }
  else if(a>max2){
   max2=a;
    }
        i=i+1;
 }
 printf("%d\n%d\n",max,max2);
 return 0;
}
