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
int n=0,a[16],i=0,count=0;
for(;;n++){
 scanf("%d",&a[n]);
 if(a[n]==0){
  printf("%d\n",count);
  memset(a,0,sizeof(a));
  n=0;
  count=0;}
 if(a[n]==-1)
  break;
 int ifOdd = a[n]%2;
 for(i=0;i<n;++i){
  if(ifOdd == 0)
   if(a[i]==a[n]/2)
    count++;
  if(a[i]==a[n]*2)
    count++;
 }
}
}