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

   int main ()  {
   int k,n,x,i,s;
   for(i=1;1;i++) {
   scanf("%d %d",&k,&n) ;
   if(k==0&&n==0) {break ; }
   int a[k] ;
   for(i=1;i<=k;i++) {
       a[i]=i;
   }
   s=k; x=0 ;
   for(i=0;s>1;i++) {
       if(a[i%k+1]!=-1) {x++;}
       if(x==n&&a[i%k+1]!=-1) {a[i%k+1]=-1;
       s--;x=0; }
   }
   for(i=1;i<=k;i++) {
       if(a[i]!=-1) {printf("%d\n",i);}
   } }
   return 0;}

