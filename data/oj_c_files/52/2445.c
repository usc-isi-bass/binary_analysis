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
	int *p,*q;
	int i,j,m,n;
	scanf("%d %d",&n,&m);
	p=(int *)malloc(n*sizeof(int));
	q=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	for(j=0;j<m;j++)
	{
		*q=*(p+n-1);
		for(i=n-1;i>0;i--)
			*(p+i)=*(p+i-1);
		/*???????????????????????????????????????*/
		*p=*q;
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
		printf(" %d",*(p+i));
	printf("\n");
}