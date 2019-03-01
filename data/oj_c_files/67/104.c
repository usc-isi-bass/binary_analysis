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


int main (){
    int n,i,sz[LEN],szz[LEN];
    float s[LEN],b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d%d",&szz[i],&sz[i]);
                     s[i]=1.0*sz[i]/szz[i];
                     }
                     for(i=1;i<n;i++){
                                      b=s[i]-s[0];
                                      if(b>0.05){
                                      printf("better\n");}
                                      else if(b<-0.05){
                                      printf("worse\n");}
                                      else{
                                      printf("same\n");}
                                      }
    
    
    return 0;
}
