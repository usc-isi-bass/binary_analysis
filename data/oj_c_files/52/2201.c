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
	int i,n,m,*a;
	scanf("%d%d",&n,&m);
	a=(int*)calloc(n+m,sizeof(int));
	a+=m;
	for(i=0;i<n;i++)scanf("%d",a++);
	for(i=0;i<m;i++)a--,*(a-n)=*a;a-=n;n--;
	for(i=0;i<n;i++)printf("%d ",a[i]);
	printf("%d",a[n]);
}

