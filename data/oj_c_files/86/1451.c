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
    int n,m,i,l,x;
    int a[20];
    scanf("%d",&n);
    for(l=0;l<n;l++){
                     x=0;
                     scanf("%d",&m);
                     for(i=0;i<m;i++){
                                      scanf("%d",&a[i]);                 
                     }
                     for(i=0;i<m;i++){
                                      if((60-a[i]-x)>=3){
                                                        x+=3;               
                                      }
                                      if(((60-a[i]-x)<3)&&((60-a[i]-x)>0)){
                                                                           x=60-a[i];                                     
                                      }                 
                     }  
                     printf("%d\n",60-x);               
    }
    return 0;
    }
