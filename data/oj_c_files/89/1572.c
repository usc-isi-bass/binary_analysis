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

const int maxn=100000;
int r[maxn],o[maxn];
int main()
{
	int n,i,j;
	memset(r,0,sizeof(r));memset(o,0,sizeof(o));
	while (scanf("%d",&n)!=EOF)
	{
		for (scanf("%d%d",&i,&j);i!=0||j!=0;scanf("%d%d",&i,&j))
			o[i]++,r[j]++;
		for (i=0;i<n;i++) if (o[i]==0&&r[i]==n-1) break;
		if (i==n) puts("NOT FOUND");else printf("%d\n",i);
	}
	return 0;
}