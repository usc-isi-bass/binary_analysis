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
    int row,col;
    int i,j,sum,m,s;
    int A[100][100];
    scanf("%d%d",&row,&col);
    sum=row+col;
    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)  
       {
            scanf("%d",&A[i][j]);                
       }                              
    }
    
    for(m=2;m<=sum;m++)
    {
       for(i=1;i<=row;i++)  
       {   
           s=m-i;
           if(s>col) continue;
            printf("%d\n",A[i][s]); 
            if((m-i)==1)break;                
       }                              
    }
    return 0;
}