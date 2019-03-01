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

int n,*m,i,j,tmp;
scanf("%d",&n);
m=(int *)malloc(sizeof(int)*n);

for(i=0;i<n;i++){
scanf("%d",m+i);
}
for(i=0,j=n-1;i<j;i++,j--){
tmp=m[i];
m[i]=m[j];
m[j]=tmp;
}
printf("%d",m[0]);
for(i=1;i<n;i++){
printf(" %d",m[i]);
}
return 0;
}
