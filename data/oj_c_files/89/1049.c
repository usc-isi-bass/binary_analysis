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
    int n,i,j,flag=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++) {a[i]=0;b[i]=0;}
    scanf("%d %d",&i,&j);
    for(;i!=0||j!=0;)
    {
        a[i]++;
        b[j]++;
        scanf("%d %d",&i,&j);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0&&b[i]==n-1) {printf("%d",i);flag=1;break;}
    }
    if(flag==0) printf("NOT FOUND");
    return 0;
}
