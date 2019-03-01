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
	int num[100];
	int i,n,m,temp;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)scanf("%d",&num[i]);
	for(i=0;i<n-m;i++)
	{
		temp=num[i];
		num[i]=num[n+i];
		num[n+i]=temp;
	}
	for(i=0;i<n;i++)num[i]=num[n-m+i];
	printf("%d",num[0]);
	for(i=1;i<n;i++)printf(" %d",num[i]);
}
