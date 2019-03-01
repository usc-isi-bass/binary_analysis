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
    int N,**p,i,j,sum,m,n,l;
    scanf("%d",&N);
    for(l=0,sum=0;l<N;l++)
    {
        scanf("%d %d",&m,&n);
        p=(int**)malloc(m*sizeof(int*));
        for(i=0;i<m;i++)
        *(p+i)=(int*)malloc(n*sizeof(int));
        for(i=0;i<m;i++)
          for(j=0;j<n;j++)
            {
                scanf("%d",*(p+i)+j);
                if(i==0||j==0||i==m-1||j==n-1)
                sum+=*(*(p+i)+j);
            }
            printf("%d\n",sum);
            sum=0;
    }
}
