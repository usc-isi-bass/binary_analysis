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
int n,k;
scanf("%d %d\n",&n,&k);
int a[n];
int b[n];
for(int i=1;i<=n;i++){
scanf("%d",&a[i-1]);
b[i-1]=a[i-1];
}
int c=0;
for(int i=1;i<=n;i++){
   for(int t=i+1;t<=n;t=t++){
  if((a[i-1]+b[t-1])==k){c=1;}
}
}
if(c==1){printf("yes");}
else{printf("no");}
return 0;
}