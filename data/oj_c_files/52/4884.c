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
 void de(int x[],int n, int m);
    int n,m,i,x[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<=n-1;i++)
    scanf("%d",&x[i]);
    de(x,n,m);
    printf("%d",x[0]);
    for(i=1;i<=n-1;i++)
    printf(" %d",x[i]);
return 0;
}
void de(int x[],int n, int m)
{
     int i;
     for(i=0;i<=n-m-1;i++)
     x[i+n]=x[i];
     for(i=0;i<=n-1;i++)
     x[i]=x[i+n-m];
}
