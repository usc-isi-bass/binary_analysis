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

const int maxn=1100;
int a[maxn],b[maxn];
int n;
int count(int d)
{
	int i,j;
	int win=0;
	for (i=d;i<n;i++) if (a[i]>b[i-d]) win++;else if (a[i]<b[i-d]) win--;
	return win-d;
}
int main()
{
	int maxwin;
	int i,j,k;
	while (scanf("%d",&n),n)
	{
		for (i=0;i<n;i++) scanf("%d",a+i);
		for (i=0;i<n;i++) scanf("%d",b+i);
		sort(a,a+n);
		sort(b,b+n);
		maxwin=-n;
		for (i=0;i<n;i++)
		{
			k=count(i);
			if (maxwin<k) maxwin=k;
		}
		printf("%d\n",maxwin*200);
	}
	return 0;
}