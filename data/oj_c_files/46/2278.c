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


int main(int argc, char *argv[])
{
  int i,j,x,y,z;
   int a[100][100],b[100][100]={0};
   scanf("%d%d",&x,&y);
   for(i=0;i<x;i++)
     {
       for(j=0;j<y;j++) 
       scanf("%d",&a[i][j]);
     }
     while(x>0)
  {
     for(j=0;j<y;j++)
    printf("%d\n",a[0][j]);
   for(i=0;i<y;i++)
         {
            for(j=0;j<x;j++)
             b[i][j]=a[j+1][y-1-i];
         } 
    for(i=0;i<y;i++)
         {
            for(j=0;j<x;j++)
             a[i][j]=b[i][j];
         }
    z=x;
    x=y;
    y=z-1;    
  }            	
  return 0;
}
