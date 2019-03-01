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
  int a, b, c, n;
  scanf("%d", &n);
 int i;
 for(i=1;i<=n;i++){
  if(i==1){ 
    scanf("%d", &a);
}else if(i==2){
    scanf("%d", &b);
}else{
  scanf("%d", &c);
}
 if(a>=b && a>=c && b>=c){
   a = a;
   b = b;
}else if(a>=b && a>=c && c>=b){
      a = a;
      b = c;
      }else if(b>=a && b>=c && a>=c){
            c = a;
            a = b;
            b = c;
            }else if(b>=a && b>=c && c>=a){
                  a = b;
                  b = c;
                  }else if(c>=a && c>=b && a>=b){
                        b = a;
                        a = c;
                        }else if(c>=a && c>=b && b>=a){
                              a = c;
                              b = b;
                              }
}
printf("%d\n%d\n", a, b);
return 0;
}