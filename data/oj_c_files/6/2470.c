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
    int *p[400],m,n,a,i,j,k,l,sum,counter,b,matrix[100][100];
    scanf("%d",&a);
    for(k=0;k<a;k++)
    {
                    sum=0;
                    counter=0;
                    scanf("%d %d",&m,&n);
                    for(i=0;i<m;i++)
                    {
                                    for(j=0;j<n;j++)
                                    {
                                                    scanf("%d",&matrix[i][j]);
                                                    if(i==0||i==m-1||j==0||j==n-1)
                                                    {
                                                              p[counter]=&matrix[i][j];
                                                              counter++;
                                                    }
                                    }
                    }
                    for(l=0;l<counter;l++)
                    {
                                          sum+=*p[l];
                    }
                    printf("%d\n",sum);
    }
    return 0;
} 