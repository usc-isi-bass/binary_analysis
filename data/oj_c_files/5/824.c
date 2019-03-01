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
  int x,y,i,sum=0;
  char a[505],b[505];
  double n,m;
     scanf("%lf",&n);
     scanf("%s %s",a,b);
     x=strlen(a);
     y=strlen(b);
        if(x!=y){
           printf("error");
           goto k;
         }
         for(i=0;i<x;i++){
             if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T')){
                 printf("error");
                 goto k;
              }else{
                  if(a[i]==b[i]){
                      sum++;
                  }
               }
         }
      m=(1.0*sum)/x;
      if(m>n){
        printf("yes");
        }else{
        printf("no");
        }
   k:return 0;
}