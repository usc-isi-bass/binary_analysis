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
	int n,m,i,a[100]={0},t,temp,r;

	scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=n-m;i<n;i++)
	{
		t=0;
		r=i;
		while(t<n-m)
		{
			temp=a[r];
			a[r]=a[r-1];
			a[r-1]=temp;
			t++;
			r--;
		}
	}
	
	printf("%d",a[0]);
	
	for(i=1;i<n;i++)
		printf(" %d",a[i]);
}

