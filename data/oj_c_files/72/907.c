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
int m,n,i,j,sz[22][22],a;
scanf("%d %d",&m,&n);
for(i=1;i<=m;i++){
                 for(j=1;j<=n;j++){
                                  scanf("%d",&sz[i][j]);
                                  }
                 }
                 for(i=0;i<=m+1;i++){
                                  sz[i][0]=0;
                                  sz[i][n+1]=0;
                                  }
                                  for(j=0;j<=n+1;j++){
                                                   sz[0][j]=0;
                                                   sz[m+1][j]=0;
                                                   }
                                                   for(i=1;i<=m;i++){
                                                                    for(j=1;j<=n;j++){
                                                                                     a=sz[i][j];
                                                                                     if(a>=sz[i][j-1]&&a>=sz[i][j+1]&&a>=sz[i-1][j]&&a>=sz[i+1][j]){
                                                                                                                                                    printf("%d %d\n",i-1,j-1);
                                                                                                                                                    }
                                                                                     }
                                                                    }
                 
                                  return 0;                              
}



