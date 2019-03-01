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
  int n,a[100],i,j,t;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
} 
  j=n-1;
  for(i=0;i<j;i++){
  t=a[i];
  a[i]=a[j];
a[j]=t;
 j--;
}
 for(i=0;i<n;i++){
if(i<n-1) printf("%d ",a[i]);
else printf("%d",a[i]);
}
return 0;
}