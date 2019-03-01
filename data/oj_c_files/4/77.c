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
    void print(int *p[101],int row,int col);
    int *p[101];
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
                      p[i]=(int *)calloc(101,sizeof(int));
                      for(j=0;j<col;j++)
                      {
                                        scanf("%d",(p[i]+j));
                      }
    }
    print(p,row,col);
    
    return 0;
}

void print(int *p[101],int row,int col)
{
     int k,i;
     for(k=0;k<(row+col-1);k++)
     {
                               for(i=0;(i<k+1)&&(i<row);i++)
                               {
                                                 if((k-i)<col)
                                                 printf("%d\n",*(p[i]+(k-i)));
                               }
     }
}