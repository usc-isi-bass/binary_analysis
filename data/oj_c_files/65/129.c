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
    int n,m,i,j,p,q;
    scanf("%d",&n);
    m=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if(p==q)
        continue;
        if((p==0&&q==1)||(p==1&&q==2)||(p==2&&q==0))
        m++;
        else
        m--;
    }
    if(m==0)
    printf("Tie");
    if(m>0)
    printf("A");
    if(m<0)
    printf("B");
    return 0;
    
}