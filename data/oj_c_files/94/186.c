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

int main()
{
int N;
scanf("%d",&N);
int sz[N];
int i;
for(i=0;i<N;i++){
    scanf("%d ",&sz[i]);
}
int js[500];
int j=0,sum=0;
for(i=0;i<N;i++){
    if(sz[i]%2!=0){
     js[j]=sz[i];
     j++;
     sum++;
     }
}
int k,e;
for(k=1;k<sum;k++){
  for(j=0;j<=sum-k;j++){
     if(js[j]>js[j+1]){
      e=js[j];
      js[j]=js[j+1];
      js[j+1]=e;
      }
  }
}
for(j=0;j<sum;j++){
if(j!=sum-1)
printf("%d,",js[j]);
else
printf("%d",js[j]);
}
return 0;
}