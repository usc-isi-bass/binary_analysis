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
	int a[2000],b[2000],i,j,n,m,k,p;
	scanf("%d",&a[1]);
	i=2;
	while(scanf(",%d",&a[i]))
		i++;
	scanf("%d",&b[1]);
	j=2;
	while(scanf(",%d",&b[j]))
		j++;
	j--;
	printf("%d ",j);
	n=0;
	for(i=1;i<=j;i++)
		if(b[i]>n)
			n=b[i];
	m=0;
	for(i=0;i<n;i++)
	{
		p=0;
		for(k=1;k<=j;k++)
			if(i>=a[k]&&i<b[k])
				p++;
		if(p>m)
			m=p;
	}
	printf("%d",m);
}
