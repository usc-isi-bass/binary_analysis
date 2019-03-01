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
 int res[10000]={0,1},i,n,a,j,b[10000]={0};
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  scanf("%d",&a);
  for(j=2;j<=a;j++){
   res[j]=res[j-1]+res[j-2];
  }
  b[i]=res[a];
 }
 for(i=1;i<=n;i++){
  printf("%d\n",b[i]);
 }
 return 0;
}
