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
  int m,n,sz[22][22]={0},i,j,a,b;
  scanf("%d%d",&m,&n);
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&sz[i][j]);
    }
   }
  for(a=1;a<=m;a++){
    for(b=1;b<=n;b++){
      if((sz[a][b]>=sz[a-1][b])&&(sz[a][b]>=sz[a+1][b])&&(sz[a][b]>=sz[a][b-  1])&&(sz[a][b]>=sz[a][b+1])){
        printf("%d %d\n",a-1,b-1);
      }
     }
   }
   return 0;
}
