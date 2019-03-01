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
 int n,k,s,x;
 scanf("%d%d",&n,&k);
    x=0;
 int a[1000];
 for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 for(int j=0;j<n-1;j++){
  for(int l=j+1;l<n;l++){
   s=a[j]+a[l];
   if(s==k){
    x=x+1;}
  }
 }
 if(x==0){
  printf("no");}
 if(x!=0){
  printf("yes");}
 return 0;
}
