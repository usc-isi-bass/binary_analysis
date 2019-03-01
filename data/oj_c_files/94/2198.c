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

int t[10001];
int comp ( const void *a, const void *b )
{
    return * ( int * ) a - * ( int * ) b;
}
int main()
{

   int i,n;
   scanf("%d",&n);
    for(i=0;i<n;i++)

    scanf("%d",&t[i]);
    qsort(t,n,sizeof(int),comp);
    for(i=0;t[i]%2;i++)
    printf("%d",t[i]);
    for(;i<n;i++)
    if(t[i]%2)
    printf(",%d",t[i]);
    return 0;
}

