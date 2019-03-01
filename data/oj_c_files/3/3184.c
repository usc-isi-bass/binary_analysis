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

int f(int x,int a[],int y)
{
	int i,j,k;
	for(i=0;i<y;i++)
	{
		if(x==a[i])
		    return i;
		if(i>=y-1)
		    return -1;
	}
}
int main()
{
	int i,x,y,n,k;
	scanf("%d %d",&n,&k);
	int*a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		x=f(a[i],a,n);
		y=f(k-a[i],a,n);
		if(x!=y&&x!=-1&&y!=-1)
		{
		    printf("yes\n");
		    break;
		}
		if(i>=n-1)
		    printf("no\n");
	}
	free(a);
	return 0;
}