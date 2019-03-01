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

void swap(int x,int y,int a[])
{
    int t;
    while(x<y)
    {
        t=a[x];
        a[x]=a[y];
        a[y]=t;
        x++;
        y--;
    }
}
int main()
{
    int n,m,a[100],i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    swap(0,n-1,a);
    swap(0,m-1,a);
    swap(m,n-1,a);
    printf("%d",a[0]);
    for(i=1;i<n;i++) printf(" %d",a[i]);
}