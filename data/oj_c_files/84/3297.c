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

int max(int a[],int n)
{
	int i,j=0,t;
	for (i=0;i<n;i++)
		if (*(a+j)<*(a+i))
			j=i;
	if (j!=0)
	{
		t=*(a+j);
		*(a+j)=*(a+0);
		*(a+0)=t;
	}
	return(*a);
}
void main()
{
	int i,n,num[100]={0};
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("%d\n",max(num,n));
	printf("%d\n",max(num+1,n-1));
}
