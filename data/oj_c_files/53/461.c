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
	int a[300],i,j,n,m=0,k;
	scanf("%d",&n);
    for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[1]);
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]==a[j])
				a[j]=0;
    for(k=2;k<=n;k++)
		if(a[k]!=0)
		printf(",%d",a[k]);
}
