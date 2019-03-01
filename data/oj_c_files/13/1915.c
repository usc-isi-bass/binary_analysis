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
	int a[20000],n,i,m,r;
	scanf("%d",&n);
	scanf("%d",&a[1]);
	printf("%d",a[1]);
	for(i=2;i<=n;i++)
	{
		r=0;
		scanf("%d",&a[i]);
        for(m=1;m<i;m++)
		{
			if(a[i]==a[m])
				r++;
		}
		if(r==0)
			printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}