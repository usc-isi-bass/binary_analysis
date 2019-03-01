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
    int a,b,c,h,e,f,s=1,i=0;
    while(s!=12*3600){
      scanf("%d %d %d %d %d %d",&a,&b,&c,&h,&e,&f);
      s=(h+12)*3600+e*60+f-a*3600-b*60-c;
      if(s!=12*3600){
      printf("%d\n",s);
      }
      }
      return 0;
}
    