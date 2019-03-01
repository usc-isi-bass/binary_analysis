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
   int n,i;
   double jieguo=0.00;
   scanf("%d\n",&n);
   int a[n],b[n];
   for (i=0;i<n;i++){
       scanf("%d%d\n",&a[i],&b[i]);
       if (a[i]==b[i]-1||a[i]==b[i]+2){jieguo=jieguo+1;}
          else if (a[i]==b[i]){jieguo=jieguo;}
             else {jieguo=jieguo-1;}       
   }
   if (jieguo==0.00){printf("Tie");}
   else if(jieguo>0.00){printf("A");}
   else {printf("B");}
   return 0;
}