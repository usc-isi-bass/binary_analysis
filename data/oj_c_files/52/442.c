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
	int n;
	int num[1000];
	int *p;
	int i,m;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	p=num;
	for(i=0;i<m;i++)
	{for(p=num+n;p>=num;p--)
	{
		
		*(p+1)=*p;
	}
	p=num;
	*p=*(num+n);}
	for(i=0;i<n-1;i++)
	printf("%d ",num[i]);
	printf("%d",num[i]);

	return 0;
}