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
int n,k,s;
s=0;
int sz[1000];
scanf("%d %d",&n,&k);
for(int i=0;i<n;i++){
scanf("%d ",&sz[i]);
}
for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    if((sz[j]+sz[i])==k&&j!=i){
    s++;
   }}}
if(s==0){
   printf("no");
}else{
   printf("yes");
}
return 0;
}

  