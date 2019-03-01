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
    int n,m;
    m=0;
    int sz[2000][2];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int a=0;a<2;a++){
            scanf("%d",&sz[i][a]);
        }
  if(sz[i][0]==0&&sz[i][1]==1){m++;}       
      if(sz[i][0]==sz[i][1]){m=m;}  
      if(sz[i][0]==0&&sz[i][1]==2){m--;} 
       if(sz[i][0]==1&&sz[i][1]==0){m--;} 
        if(sz[i][0]==1&&sz[i][1]==2){m++;} 
        if(sz[i][0]==2&&sz[i][1]==1){m--;} 
         if(sz[i][0]==2&&sz[i][1]==0){m++;} 
    }
if(m==0){printf("Tie");}
else if(m>0){printf("A");}
else if(m<0){printf("B");}
    return 0;
}

