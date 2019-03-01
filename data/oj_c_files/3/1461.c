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
 int sz[SUM];
 int n,k;
 scanf("%d%d",&n,&k);
 int i;
 for(i=0;i<n;i++){
                  scanf("%d",&sz[i]);
                  }
 int j,sum=0;
 for(j=0;j<n-1;j++){
                  for(i=1;i<=n-j-1;i++){
                                      if(sz[j]+sz[j+i]==k){
                                                           sum++;
                                                           }
                                      }
                  }
 if(sum!=0){
            printf("yes");
            }
 else{
      printf("no");
      }
            
 return 0;
}