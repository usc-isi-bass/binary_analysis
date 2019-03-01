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
    int s,t;
    scanf("%d",&s);
    if(s==1){
    printf("End");
    }
    while(s!=1){
     if(s%2!=0){
      t=s;
      s=t*3+1;
      printf("%d*3+1=%d\n",t,s);
     }
     if(s%2==0){
      t=s;
      s=t/2;
      printf("%d/2=%d\n",t,s);
     }
     if(s==1){
     printf("End");
     }
     }
    return 0;
}