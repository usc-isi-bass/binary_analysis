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
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int  x1,y1,x2,y2,i,j,k;
    scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++){
       for(j=0;j<y1;j++){
          scanf("%d",&a[i][j]);
          }
          }
    scanf("%d %d",&x2,&y2);      
    for(i=0;i<x2;i++){
       for(j=0;j<y2;j++){
          scanf("%d",&b[i][j]);
          }
          } 
    for(i=0;i<x1;i++){
       for(j=0;j<y2;j++){
          c[i][j]=0;
          for(k=0;k<y1;k++){
          c[i][j]+=a[i][k]*b[k][j];
          }
          } 
          } 
    for(i=0;i<x1;i++){          
       for(j=0;j<y2-1;j++){
          printf("%d ",c[i][j]);
          }
          printf("%d\n",c[i][y2-1]);
          }
}                  
