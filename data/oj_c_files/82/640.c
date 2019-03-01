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
{int n,i,count[1000]={0},max=0,t=0,m=0;
scanf("%d",&n);
int g[n],d[n],z[n];
for(i=0;i<n;i++){
  scanf("%d %d",&g[i],&d[i]);
}
for(i=0;i<n;i++){ 
   if(g[i]>=90&&g[i]<=140&&d[i]>=60&&d[i]<=90){
    z[i]=1;
   }else{
    z[i]=0;}
}
for(i=0;i<n;i++){
 if(z[i]==1){
    count[m]++;}
 else {
    m++;
    count[m]=0;}
 if(i==n-1)
    t=m+1;
}
for(i=0;i<t;i++){
 if(count[i]>max){
   max=count[i];}
}
printf("%d",max);
return 0;
}
  
      