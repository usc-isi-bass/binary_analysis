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

 int *p,*q,m,n;
void shuru()
{   
    scanf("%d%d",&m,&n);
    p=(int*)malloc(m*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
	for (int i=0;i<m;i++) 
	scanf("%d",p+i);
	for (int i=0;i<n;i++) 
	scanf("%d",q+i);
}
static int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
void shuchu()
{
	for(int i=0;i<m;i++)
    printf("%d ",*(p+i));
	for(int i=0;i<n-1;i++)
	printf("%d ",*(q+i));
	printf("%d",*(q+n-1)); 
}
main()
{   
    shuru();
	qsort(p,m,sizeof(int),cmp);
	qsort(q,n,sizeof(int),cmp);
	shuchu();
}
 