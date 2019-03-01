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
	int n,m,i,j,s[150]={0},a[150]={0};
	scanf("%d %d",&n,&m);

	for(i=0;i<n;i++)
		scanf("%d",&s[i]);

	for(i=n-m,j=0;i<n;i++,j++)
		a[j]=s[i];

	for(i=n-m-1;i>=0;i--)
		s[i+m]=s[i];

	for(i=0;i<m;i++)
		s[i]=a[i];

	for(i=0;i<n-1;i++)
		printf("%d ",s[i]);
	printf("%d\n",s[n-1]);
}