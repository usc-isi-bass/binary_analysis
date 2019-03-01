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
    int i,n,a,b,c,d,e,f,j,k;
   for(;;){scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
   if(a==0){break;}
  j=a*3600+b*60+c;
  k=d*3600+e*60+f;k=k+12*3600;
   k=k-j;printf("%d\n",k);
   
   }
   
    
    
    
    
    
    
    
 
    return 0;}