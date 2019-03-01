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
    int n,m,A[200],i,p,q;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
     scanf("%d",&A[i]);
}
    for(p=1;p<=(n-m);p++)
	{
	   A[n+p]=A[p];
	}
	for(q=(n-m+1);q<(n+n-m);q++)
	{
	printf("%d ",A[q]);
	}
	printf("%d",A[n+n-m]);
   return 0;
}