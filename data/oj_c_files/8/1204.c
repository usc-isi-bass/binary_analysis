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

int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
void Do(int m,int n)
{
    int a[m],b[n];
    int i;
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    qsort(a,m,4,compare);
    qsort(b,n,4,compare);
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    for(i=0;i<n-1;i++)
    printf("%d ",b[i]);
    printf("%d\n",b[n-1]);
}
main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    Do(m,n);
}
