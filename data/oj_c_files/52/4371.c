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
	void order(int p,int q,int r[]);
	int n1,n2,i;
	int a[10000];	
	scanf("%d %d",&n1,&n2);
	for(i=1;i<=n1;i++)
		scanf("%d",&a[i]);
	order(n1,n2,a);
	return 0;
}
void order(int n1,int n2,int a[])
{
	int i;
	for(i=n1-n2+1;i<=n1;i++)
		printf("%d ",a[i]);
	printf("%d",a[1]);
	for(i=2;i<=n1-n2;i++)
		printf(" %d",a[i]);
}
	