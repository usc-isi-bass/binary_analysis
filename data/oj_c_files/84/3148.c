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
	int a;
	scanf("%d",&a);
	int n[100];
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
	}
	int max=n[0];
	int j;
	for(j=1;j<a;j++)
	{
		if (n[j]>max)
		{
			max=n[j];
		}
	}
	printf("%d",max);
	int next=n[0];
	int q;
	for(q=1;q<a;q++)
	{
		if(n[q]>=next&&n[q]<max)
		{
			next=n[q];
		}
	}
	printf("\n%d\n",next);
	return 0;
}
