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
    int zl[100][100];
    int i,j,k1=0,t1=0,k2=0,t2=0,r=0;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
          scanf("%d",&zl[i][j]);
       }
    }
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
          if(zl[i][j]==0&&zl[i-1][j]==255&&zl[i][j-1]==255){
            k1=i;
            t1=j;
            }
       else if(zl[i][j]==0&&zl[i+1][j]==255&&zl[i][j+1]==255){
            k2=i;
            t2=j;
            }
            }
            }
    for(i=k1;i<=k2;i++){
       for(j=t1;j<=t2;j++){
          if(zl[i][j]==255){
            r++;
            }
            }
            }
    printf("%d",r);
    return 0;
}