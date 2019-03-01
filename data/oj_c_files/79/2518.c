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

int king(int M,int N)
{
    int k=0;
    for(int i=2;i<=M;i++)
    k=(k+N)%i;
    return ++k;
} 
int main()
{
    int n,m,a[100],i=1,x;
    while(scanf("%d%d",&n,&m)&&n&&m)
    {
                                    if(m==0&&n==0)
                                    break;
                                    else
                                    a[i]=king(n,m); 
                                    x=i;
                                    i++;
    }
    for(i=1;i<=x;i++)
    {
               cout<<a[i]<<endl;
    }
    return 0;
}