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
 int a[200],n,m,i,j;
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  for(i=0;i<n-m;i++){
 a[n+m+i]=a[i];
 }
for(i=n-m,j=0;i<n;i++,j++){
 
  a[n+j]=a[i];

}
  for(i=n;i<(2*n-1);i++){
  printf("%d ",a[i]);
  }
 printf("%d",a[2*n-1]);
 return 0;
}

