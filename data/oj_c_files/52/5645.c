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
	int a[100],m,n,i,b[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        b[i]=a[n-m+i];
    }
    for(i=m;i<n;i++)
    {
        b[i]=a[i-m];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d",b[0]);
        }
        else
        {
            printf(" %d",b[i]);
        }
    }
    return 0;
}