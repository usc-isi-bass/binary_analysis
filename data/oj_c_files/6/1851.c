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
    int K,M,N,sz[99][99];
    scanf("%d",&K);
    for(int k=1;k<=K;k++)
    {
        int result=0;
        scanf("%d %d",&M,&N);
        for(int m=0;m<M;m++) for(int n=0;n<N;n++) scanf("%d",&sz[m][n]);
        if(M<=2||N<=2)
        {
            for(int m=0;m<M;m++) for(int n=0;n<N;n++) result+=sz[m][n];
        }
        else
        {
            for(int n=0;n<N;n++) result+=sz[0][n];
            for(int n=0;n<N;n++) result+=sz[M-1][n];
            for(int m=1;m<M-1;m++) result+=sz[m][0];
            for(int m=1;m<M-1;m++) result+=sz[m][N-1];
        }
        printf("%d\n",result);
    }
    return 0;
}