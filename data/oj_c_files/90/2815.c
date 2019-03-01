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

int way(int m,int n)
{
    if(m==1 || n==1) return(1);
    else if(m<0) return 0;
    else if(m==n) return(way(m,n-1)+1);
    else return(way(m,n-1)+way(m-n,n));
}
main()
{
    int p;scanf("%d\n",&p);
    int i,j,m,n;
    for(i=0;i<p;i++)
    {
        scanf("%d%d",&m,&n);
        printf("%d",way(m,n));
        if(i!=p-1) printf("\n");
    }
}
