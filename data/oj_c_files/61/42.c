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

int fei (int a)
{
    int t;
    if (a==1)
    return 1;
    if (a==2)
    return 1;
    if ( a!=1 && a!=2 )
    {
         t=fei (a-1)+fei (a-2);
         return t;
    }
}
int main ()
{
    int n,i;
    int t[20];
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&t[i]);
    }
    for (i=0;i<n;i++)
    {
        printf ("%d\n",fei(t[i]));
    }
    getchar ();
    getchar ();
}
    

