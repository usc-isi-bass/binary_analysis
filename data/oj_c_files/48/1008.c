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

int a[9][9]={0};
int b[9][9]={0};
void ganster()
{
     int i,j,c;
     for(i=0;i<9;i++)
     for(j=0;j<9;j++)
     b[i][j]=0;
     for(i=0;i<9;i++)
     {
        for(j=0;j<9;j++)
        {
           if(a[i][j]!=0)
           {c=a[i][j];
           b[i][j]+=c;b[i][j-1]+=c;b[i][j+1]+=c;
           b[i+1][j]+=c;b[i+1][j-1]+=c;b[i+1][j+1]+=c;
           b[i-1][j]+=c;b[i-1][j-1]+=c;b[i-1][j+1]+=c;}
        }
     }
     for(i=0;i<9;i++)
     for(j=0;j<9;j++)
     a[i][j]+=b[i][j];
}
int main(void)
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    a[4][4]=m;
    for(i=0;i<n;i++)
    {
         ganster();
    }
    for(i=0;i<9;i++)
    {
       for(j=0;j<8;j++)
       {
          printf("%d ",a[i][j]);
       }
       printf("%d\n",a[i][j]);
    }
        
}
