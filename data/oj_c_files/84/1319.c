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

int cmp(const void * a, const void * b);
int main()
{
	int n;
	scanf("%d",&n);
	int *arr =  (int *) malloc (sizeof(int) * n);
	int i;
	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(arr[0]),cmp);
	printf("%d\n",arr[n-1]);
	printf("%d\n",arr[n-2]);
	scanf("%d",&n);
	return 0;
}
int cmp(const void * a, const void * b)
{
	return ((*(int*)a-*(int*)b>0)?1:-1);
}