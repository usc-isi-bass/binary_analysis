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
	int n,a[301],b[301],i,j,k,p;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	b[0]=a[0];
	i=1;k=1;
	while(i<n)
	{
		p=1;
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
			if(a[i]==a[j])
			{p=0;break;}
		if(p)
		b[k++]=a[i];
		i++;
	}
	printf("%d",b[0]);
	for(i=1;i<k;i++)
		printf(",%d",b[i]);
	return 0;
}
