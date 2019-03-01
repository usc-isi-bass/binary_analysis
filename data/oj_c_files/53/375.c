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


main()
{
	int a[302],b[302],i,k,j,n;
	scanf("%d",&n);
	k=0;
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		j=1;
		while (a[j]!=a[i]&&j<i)
			j++;
		if (j==i) 
		{
			k++;
			b[k]=a[i];
		}
	}
	for (i=1;i<k;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[k]);
}