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


int getup(int now,int n,int k){
   return now*n+k;
}

int main(){
int monkey=1,n,k,now=1,total,start;
scanf("%d%d",&n,&k);
total=k;
start=k;
for(;monkey<n;){
   total=getup(total,n,k);
   if(total%(n-1)==0){
      ++monkey;
      total/=(n-1);
   }
   else{
      start++;
      total=start;
      monkey=1;
   }
}
printf("%d\n",getup(total,n,k));
}