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
	int a[200][200],t,n,m,i,j,s;
	int (*p)[200];
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d%d",&n,&m);
		p=a;
		for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		scanf("%d",*(p+i)+j);
		s=0;
		for (i=0;i<m;i++) s=s+*(*p+i);
		if (n>1)
		for (i=0;i<m;i++) s=s+*(*(p+n-1)+i);
		for (i=1;i<n-1;i++) s=s+*(*(p+i));
		if (m>1)
		for (i=1;i<n-1;i++) s=s+*(*(p+i)+m-1);
		printf("%d\n",s);
	}
} 