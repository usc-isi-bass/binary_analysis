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
    int a[100][100],b[100][100],c[100][100]={0};
    int m,d,n;
    int i,j,k;
    //read
    scanf("%d %d",&m,&d);
    for(i=0; i<m; i++)
        for(j=0; j<d; j++)
            scanf("%d",&a[i][j]);
    scanf("%d %d",&d,&n);
    //read
    for(i=0; i<d; i++)
        for(j=0; j<n; j++)
            scanf("%d",&b[i][j]);
//cal
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            for(k=0; k<d; k++)
                c[i][j]+=a[i][k]*b[k][j];
//print
    for(i=0; i<m; i++)
    {
        for(j=0; j<n-1; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("%d\n",c[i][j]);
    }
}
