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
    int m,i,j,k,mod,h=1;
    scanf("%d",&m);
    //????
    for(i=3;i<=m/2;i=i+2) {
                          for(j=2;j<i;j=j+1){
                          mod=i%j;
                          if(mod==0){h=0;}
                          }
                          if(h!=0){
                                      for(k=2;k<(m-i);k=k+1){
                                                             mod=(m-i)%k;
                                                             if(mod==0){h=0;}
                                                             }
                                      if(h!=0){
                                                  printf("%d %d\n",i,m-i);
                                                  }                       
                                      
                                      }
						  h=1;
						
                          }             
  

  return 0;
}
