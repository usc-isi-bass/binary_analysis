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
	int a[300],n,i,k=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=i;j>=0;j--)
		{
			if(a[i]==a[j])
				k++;
		}
		if(k==1&&i==0)
			printf("%d",a[i]);
		if(k==1&&i>0)
			printf(",%d",a[i]);
	}
	printf("\n");
	return 0;
}


