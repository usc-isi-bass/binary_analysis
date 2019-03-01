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

int num(int a)
{
	int m;
	if (a==1||a==2)
		m=1;
	else
		m=num(a-1)+num(a-2);
	return (m);
}
int main()
{
	int i,n,m;
	int a[100];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		m=num(a[i]);
		printf("%d\n",m);
	}
	return 0;
}