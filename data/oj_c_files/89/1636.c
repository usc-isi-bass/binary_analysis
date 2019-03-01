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
    int i,n,p=0,r,x,y,*b;
    scanf("%d",&n);
    b=(int*)malloc(n*sizeof(int));
    for (i=0;i<=n-1;i++)
    b[i]=0;
    while (1)
    {
        scanf("%d %d",&x,&y);
        if ((x==0)&&(y==0))
        break;
        b[x]=-1;
        if (b[y]!=-1) b[y]++;
    }
    for (i=0;i<=n-1;i++)
    if (b[i]!=-1) {p++;r=i;}
    if (p!=1) printf("NOT FOUND");
    else
    if (b[r]==n-1)
    printf("%d",r);
    else
    printf("NOT FOUND");
}
