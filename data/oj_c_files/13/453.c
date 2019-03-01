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
	int a[20000],b[100],n,i,j,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	b[0]=a[0];
	l=0;
	k=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<=l;j++) if (a[i]==b[j]) k=1;
		if (k==0)
		{
			l++;
			b[l]=a[i];
		}
		k=0;
	}
	for(i=0;i<l;i++) printf("%d ",b[i]);
    printf("%d",b[l]);
}