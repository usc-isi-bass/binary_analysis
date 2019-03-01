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

int comp(const void *a,const void *b);
int main()
{
	int n,m,i,j,k;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	 scanf("%d",&b[i]);	
    qsort(a,n,sizeof(int),comp);
    qsort(b,m,sizeof(int),comp);
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
    for(i=0;i<m;i++)
     {printf("%d",b[i]);
      if(i<m-1)
       printf(" ");
     }
    return 0; 
}
int comp(const void*a,const void*b)
{
    return*(int*)a-*(int*)b;
}