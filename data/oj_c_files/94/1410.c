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
int i,j,k,N;
j=0;
int sz[10000];
scanf("%d",&N);
for(i=0;i<N;i++){
		scanf("%d",&(sz[i]));
}
for(i=0;i<N;i++){
   if(sz[i]%2!=0){
sz[j]=sz[i];
j++;
}
}
int maxIndex,e;
for(k=1;k<=j;k++){
  maxIndex=0;
for(int i=0;i<=j-k;i++){
  if(sz[i]>sz[maxIndex]){
     maxIndex=i;
}
}
if(maxIndex!=j-k){
   e=sz[maxIndex];
   sz[maxIndex]=sz[j-k];
   sz[j-k]=e;
}
}
printf("%d", sz[0]);
for(i=1;i<j;i++){
  printf(",%d",sz[i]);}
return 0;
}

