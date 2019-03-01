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
    int n,i,a,b,c,s=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d %d",&a,&b);
      if( (a>=90&&a<=140)&&(b>=60&&b<=90) ){
        t++;
        c=1;
      }
      else if(!( (a>=90&&a<=140)&&(b>=60&&b<=90) )){
        t=0;
      }
      if(t>s){s=t;}
    }
    printf("%d",s);

    return 0;
}
