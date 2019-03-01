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
int j,i,n,k,s=0;
scanf("%d %d\n",&n,&k);
int sz[n];
for(i=0;i<=n-1;i++){
scanf("%d",&sz[i]);
for(j=0;j<=i;j++){
if(sz[i]+sz[j]==k){
s++;}}}
if(s>0){printf("yes");}
else{printf("no");}
return 0;
}  