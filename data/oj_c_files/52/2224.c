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

void main()
{
	int i,n,m;
	int a[100]={0};
	scanf("%d %d",&n,&m);
	int *p;
	p=(int*)malloc(n*sizeof(int));
    for(i=0;i<=n-1;i++)
	scanf("%d",&a[i]);
   if(p=&a[n-m])
     printf("%d",*p);
   for(i=1;i<n;i++)
	{     
	    if(n-m+i<n)
		p=&a[n-m+i];
	    else
		p=&a[i-m];
	    printf(" %d",*p);
	}
}