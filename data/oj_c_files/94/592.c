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
    int N,i,k,e,sz[500];
    scanf("%d",&N);
    for(i=0;i<N;i++){
                     scanf("%d",&sz[i]);
                     }
    int s=0;                 
    for(i=0;i<N;i++){
                     if(sz[i]%2==0){
                                    sz[i]=0;
                                    s++;
                                    }
                                    }
    for(k=1;k<=N;k++){
                      int maxlndex=0;
                      for(i=0;i<=N-k;i++){
                          if(sz[maxlndex]<sz[i]){
                                            e=sz[maxlndex];
                                            sz[maxlndex]=sz[i];
                                            sz[i]=e;
                                            }
                                            if(maxlndex!=N-k){
                                                              e=sz[maxlndex];
                                                              sz[maxlndex]=sz[N-k];
                                                              sz[N-k]=e;
                                                              }
                                            }
                                            }
    for(i=s;i<N-1;i++){
                       printf("%d,",sz[i]);
                       }
                       printf("%d",sz[N-1]);   
                       return 0;
                       }

