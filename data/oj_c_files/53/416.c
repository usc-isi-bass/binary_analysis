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
	int n,i,j,k=0,a[300],b[300];
	scanf("%d %d",&n,&a[0]);
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
			if(a[i]==b[j])break;
		if(j==i)
		{
			k++;
			b[k]=a[i];
		}
	}
	for(i=0;i<k+1;i++)
	{
		printf("%d",b[i]);
		if(i!=k)printf(",");
	}
}