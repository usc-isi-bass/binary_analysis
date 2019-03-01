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

int main ( )
{
   int n,i,a[100],j,c[100],d[100];
   double b[100];
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);}
   for(i=0;i<n;i++){
   b[i]=0.0;
   for(j=0;j<a[i];j++){
   if(j==0){
   d[0]=2;
   c[0]=1;}
   if(j>0){
   d[j]=d[j-1]+c[j-1];
   c[j]=d[j-1];}
   b[i]+=(double)d[j]/(double)c[j];}
   printf("%.3lf\n",b[i]);}
   return 0;
}
   