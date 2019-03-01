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
    int n,x,y,a,s=0,i=1,u=0;
    scanf("%d",&n);
    while(i<=n){
     scanf("%d %d",&x,&y);
     if(x<=140&&x>=90&&y<=90&&y>=60){
      s++;
      }
       if(s>u){
       u=s;
       }
      if(x>140||x<90||y>90||y<60){
       s=0;
       }
       i++;
     }
      printf("%d",u);
      return 0;
}