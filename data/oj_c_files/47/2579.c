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
int n,i,a,b,e,sz[100];
scanf("%d\n",&n);
for(i=0;i<n;i++){scanf("%d",&sz[i]);}
if(n%2==1){
a=(n-1)/2;
for(i=0;i<a;i++){
e=sz[n-1-i];
sz[n-1-i]=sz[i];
sz[i]=e;
}}
else{
b=n/2;
for(i=0;i<b;i++){
e=sz[n-1-i];
sz[n-1-i]=sz[i];
sz[i]=e;
}}
for(i=0;i<n-1;i++){printf("%d ",sz[i]);}
printf("%d",sz[n-1]);
return 0;
}
