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
    if(m==0||n==1)  
        return 1;       
    else if(n>m)
        return way(m,m);
    else	
        return way(m,n-1)+way(m-n,n);
}
int main()
{
    int i,t,m,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",way(m,n));
    }

return 0;
}
