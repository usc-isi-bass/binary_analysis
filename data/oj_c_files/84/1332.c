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
  int n,i,max=0,emax=0;
  int a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
 if(a[i]>max){
   max=a[i];
  }
  }
  for(i=0;i<n;i++){
    if(a[i]!=max){
         if(a[i]>emax){
             emax=a[i];
           }
       }
    }
 printf("%d\n%d\n",max,emax);
 return 0;
} 
  
   