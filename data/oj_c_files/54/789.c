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

void main()
{
    int n,k,m=1,i,j;
    scanf("%d %d",&n,&k);
    for(j=1;;j++)
    {
    m=j;
    for(i=1;i<=n;i++)
    if(m%(n-1)==0)m=m*n/(n-1)+k;
    else break;
    if(i>n)break;
    }
    printf("%d\n",m);
}        