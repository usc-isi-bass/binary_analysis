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

main()
{
int t;
scanf ("%d",&t);
for (int i=0;i<t;i++)
   {      
    int f(int m,int n);
    int m,n,k;
    scanf ("%d",&m);
    scanf ("%d",&n);
    k=f(m,n);
    printf ("%d\n",k);
   }
}
int f(int m,int n)
{
    int g(int p,int q);
    int y;
    if (n==1)
       y=1;
    else
        y=f(m,n-1)+g(m,n);
    return y;
}
int g(int p,int q)
{
    int f(int m,int n);
    int s; 
    if (p<q)
       s=0;
    else if (q==p)
       s=1;
    else 
       s=f(p-q,q);
    return s;
}
