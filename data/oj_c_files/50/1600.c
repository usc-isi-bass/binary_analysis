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


int main(int argc, char *argv[])
{ int tianshu[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
  int i,n,m,xinqi;
  scanf("%d",&xinqi);
  for(i=0;i<12;i++){
       if((tianshu[i]+12+xinqi)%7==5)
          printf("%d\n",i+1);             }
  
    
  
  return 0;
}
 
