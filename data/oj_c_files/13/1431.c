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
	int a[100]={0};
	int b,d,e,f,g,i,j,k,l,m,n,p;
	scanf("%d",&n);
	scanf("%d",&p);
	printf("%d",p);
	a[p]++;
	for(i=2;i<=n;i++)
	{   scanf("%d",&p);
	if (a[p]==0) {printf(" %d",p);a[p]++;}
	}
	return 7;
}