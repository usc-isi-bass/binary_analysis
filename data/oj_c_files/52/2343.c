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
    int n,m,i,k;
    scanf("%d%d",&n,&m);
    int a[100];
    for(i=1;i<=n;i++)
    {
		scanf("%d",&a[i]);
    }
    int *num=a;
    for(i=n-m+1;i<=n;i++)
    {
		k=*(num+i);
		printf("%d",k);
		printf(" ");
    }
    for(i=1;i<=n-m-1;i++)
    {
		k=*(num+i);
		printf("%d",k);
		printf(" ");
    }
    printf("%d",a[n-m]);
    return 0;
}