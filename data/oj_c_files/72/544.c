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
    int a[22][22]={0};
    int m,n,i,j,x=0,h[400],s[400];
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
                     for(j=1;j<=n;j++){
                                      scanf("%d",&a[i][j]);
                     }
    }
    for(i=1;i<=m;i++){
                     for(j=1;j<=n;j++){
                                      if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1])){
                                                                                                                                 h[x]=i-1;
                                                                                                                                 s[x]=j-1;
                                                                                                                                 x++;
                                      }
                     }
    }	
    for(i=0;i<x;i++){
                     printf("%d %d\n",h[i],s[i]);                 
    }                
    return 0;
}