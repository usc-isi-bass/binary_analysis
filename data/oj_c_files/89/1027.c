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
	int n,a[10000]={0},cele,i,j,k,f=0;
	scanf("%d",&n);
	scanf("%d%d",&i,&j);
	while (i!=0 || j!=0)
	{
		a[i]=-1;
		a[j]++;
		scanf("%d%d",&i,&j);
	}
	for (k=0;k<n;k++)
		if (a[k]==n-1) {printf("%d",k);f=1;}
	if (f==0) printf("NOT FOUND");
}
