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
	int n,i,j,k,a[100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
	{
		k=i;
		for(j=1+i;j<n;j++)
		{
			if(a[j]>a[k]) k=j;
		}
		if(k!=i)
		{
			int t;
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
		printf("%d\n",a[i]);
	}
}
