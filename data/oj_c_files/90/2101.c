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

int method(int (m),int (n))
{
    int c;
    if(m==0) c=1;
    if(m==1) c=1;
    if(n==1) c=1;
    if(m>=n && m>1 && n>1)
       c=method(m,n-1)+method(m-n,n);
    if(m<n && m>1 && n>1)
       c=method(m,n-1);
    return c;
}
int print()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",method(m,n));
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
       print();
    
}