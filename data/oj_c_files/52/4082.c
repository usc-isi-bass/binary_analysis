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

int t=0;
void range(int n,int m,int *p)
{
	if(t==m)
		return;
	else
	{
		t++;
		range(n,m,p);
		int v=*(p+n-1);
		int i;
		for(i=n-1;i>0;i--)
			*(p+i)=*(p+i-1);
		*p=v;

	}
}

void main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int num[100];
	int *p=num;
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	range(n,m,p);
	for(i=0;i<n-1;i++)
		printf("%d ",num[i]);
	printf("%d",num[n-1]);
}



