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
	int *a,i,n,j,m;
	scanf("%d %d",&n,&m);
         a=(int *)malloc((n+1)*sizeof(int));
	for(i=1;i<=n;i++)
		scanf("%d",a+i);
	for(i=1;i<=m;i++)
	{
		*(a+0)=*(a+n);
		for(j=n;j>0;j--)
			*(a+j)=*(a+j-1);
	}
	for(i=1;i<n;i++)
		printf("%d ",*(a+i));
	printf("%d",*(a+i));
}
