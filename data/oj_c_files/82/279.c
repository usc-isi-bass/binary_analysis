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
    int n,a,b,i,c[100],d;
    scanf("%d",&n);
    c[0]=0;
    d=0;
    for(i=1;i<=n;i++){
                      scanf("%d %d",&a,&b);
                      if(90<=a&&a<=140&&60<=b&&b<=90){
                                                      c[i]=c[i-1]+1;
                                                      }
                      else{
                           c[i]=0;
                           }
                      if(c[i]>d){
                                      d=c[i];
                                      }
                                      }
    printf("%d",d);
    return 0;
}