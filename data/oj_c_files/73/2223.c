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
    int sz[5][5],a,b,i,h[5],z[5];
    for(a=0;a<5;a++){
                     for(b=0;b<5;b++){
                                      scanf("%d",&sz[a][b]);
                                      }
                                      }
    for(a=0;a<5;a++){
                     h[a]=sz[a][0];
                     for(b=1;b<5;b++){
                                      if(sz[a][b]>h[a]){
                                                        h[a]=sz[a][b];
                                                        }
                                                        }
                                                        }
    for(b=0;b<5;b++){
                     z[b]=sz[0][b];
                     for(a=1;a<5;a++){
                                      if(sz[a][b]<z[b]){
                                                        z[b]=sz[a][b];
                                                        }
                                                        }
                                                        }
   i=0;
   for(a=0;a<5;a++){
                    for(b=0;b<5;b++){
                                     if(sz[a][b]==h[a]&&sz[a][b]==z[b]){
                                                                        printf("%d %d %d",a+1,b+1,sz[a][b]);
                                                                        i=1;
                                                                        }
                                                                        }
                                                                        }
   if(i==0){
            printf("not found");
            }
   
   return 0;
   }                    
