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

struct student
{
    int id;
    int c;
    int m;
    int t;
    } a[SIZE];
int cmp(const void*p1,const void*p2)
{
    struct student*p3=(struct student*)p1;
    struct student*p4=(struct student*)p2;
    return -p3->t+p4->t;
}
int main(void)
{
    int n, i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d%d%d",&a[i].id,&a[i].c,&a[i].m);a[i].t=a[i].m+a[i].c;}
    qsort(a,n,sizeof(a[0]),cmp);
    for(i=0;i<3;i++)
    printf("%d %d\n", a[i].id, a[i].c+a[i].m);
    return 0;
}
