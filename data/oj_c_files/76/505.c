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
    int n,i,k,d;
    scanf("%d",&n);
    struct qj{
        int a;
        int b;
    }qj[n],c;
    for(i=0;i<n;i++){
        scanf("%d%d",&(qj[i].a),&(qj[i].b));
    }
    d=qj[0].b;
    for(i=0;i<n;i++){
        if(qj[i].b>d){
            d=qj[i].b;
        }
    }
   for(k=1;k<n;k++){
   for(i=0;i<n-k;i++){
       if(qj[i].a>qj[i+1].a){
           c=qj[i];
           qj[i]=qj[i+1];
           qj[i+1]=c;
           
       }
   }
   }
   for(i=1;i<n;i++){
       if(qj[0].b>=qj[i].a&&qj[0].b<qj[i].b){
           qj[0].b=qj[i].b;
       }
   }
   if(qj[0].b==d){
       printf("%d %d",qj[0].a,qj[0].b);
   }else{
       printf("no");
   }
   return 0;
}
