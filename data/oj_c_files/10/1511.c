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

int f(int a[],int k,int m){
int ans=1,tag=1,i;
if(m<k-1) for(i=m+1;i<k;i++)
if(a[i]<=a[m]&&tag<=f(a,k,i)){
ans=1+f(a,k,i);
tag=f(a,k,i);}
return ans;}
int main(){
int a[25],k,i,max;
scanf("%d",&k);
for(i=0;i<k;i++)
scanf("%d",a+i);
max=f(a,k,0);
for(i=1;i<k;i++)
if(f(a,k,i)>max)
max=f(a,k,i);
printf("%d",max);
return 0;}