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

int a=1 ,b=1,n,e,sz[10000]={1,1},j,i;
scanf("%d",&n);
for(j=0;j<n;j++){
scanf("%d",&e);

for(i=2;i<e;i++){
sz[i]=sz[i-1]+sz[i-2];
}
printf("%d\n",sz[e-1]);










}
return 0;
}