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
    int a[5][5],i,j,m,n,b=1;
    for(i=0;i<5;i++)
       scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
    for(i=0;i<5;i++)
    {
       for(j=0;j<5;j++)
       {
          if(a[i][j]<a[i][0]) {b=0;continue;}
          if(a[i][j]<a[i][1]) {b=0;continue;}
          if(a[i][j]<a[i][2]) {b=0;continue;}
          if(a[i][j]<a[i][3]) {b=0;continue;}
          if(a[i][j]<a[i][4]) {b=0;continue;}
          if(a[i][j]>a[0][j]) {b=0;continue;}
          if(a[i][j]>a[1][j]) {b=0;continue;}
          if(a[i][j]>a[2][j]) {b=0;continue;}
          if(a[i][j]>a[3][j]) {b=0;continue;}
          if(a[i][j]>a[4][j]) {b=0;continue;}
          printf("%d %d %d",i+1,j+1,a[i][j]);
          b=1;
          break;
       }
       if(b==1) break;
    }     
    if(b==0)
      printf("not found");
        
    
}
