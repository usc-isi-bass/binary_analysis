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

int A[1000][1000],B[1000][1000],C[1000][1000]={0};
int hang,lie,tong,q,i,j;
main()
{
    //??
    scanf("%d %d",&hang,&tong);
    for(i=0;i<hang;i++)
    {
        for(q=0;q<tong;q++)
            scanf("%d",&A[i][q]);
    }
    scanf("%d %d",&tong,&lie);
    for(q=0;q<tong;q++)
    {
        for(j=0;j<lie;j++)
            scanf("%d",&B[q][j]);
    }
    
    //??
    for(i=0;i<hang;i++)
    {
        for(j=0;j<lie;j++)
        {
            for(q=0;q<tong;q++)
            {
                C[i][j]=C[i][j]+A[i][q]*B[q][j];
            }
        }
    }
    
    //??
    for(i=0;i<hang;i++)
    {
        for(j=0;j<lie;j++)
        {
            if(j==0)
                printf("%d",C[i][j]);
            else
                printf(" %d",C[i][j]);
        }
        printf("\n");
    }
    
}