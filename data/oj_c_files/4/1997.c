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
    int *a,*a0,*b,*p;
    int row,col;
    int r,c,t,i;
    
    scanf("%d %d",&row,&col);
                        
    
    a=(int *)calloc(100,100*sizeof(int));
    
    a0=a;
    
    for(r=0;r<row;r++)
    {
     for(c=0;c<col;c++)
       {
       scanf("%d",a+r*col+c); 
       }  
    }
    
    
    
    a=a0;
    for(c=0;c<row+col-1;c++)
    {
     r=0;     t=c;
         for(i=0;i<row*col;i++)
          {
          if(0<=r&&r<row&&0<=t&&t<col)
          {
           printf("%d",*(a+r*col+t));
           if(r!=row-1||t!=col-1) printf("\n");
           }
           r++;t--;
          }
    }
    
}
