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
	int n,m,huan,i;

	int *p,*t;
	scanf("%d %d",&n,&m);
    if((t=(int *)malloc((2*n-m)*sizeof(int)))==NULL)
	{
		printf("No space avaible!");
		
	}
	for (p=t;p<t+n;p++)
	{
		scanf("%d",p);
	}
	for (i=0;i<n-m;i++)
	{
		
		t[n+i]=t[i];
	}
	for (p=t+n-m;p<t+(2*n-m-1);p++)
		printf("%d ",*p);
	printf("%d",*p);
}