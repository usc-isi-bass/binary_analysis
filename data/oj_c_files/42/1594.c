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

int main(void)
{
	int a[100000],length;     
	int n,k,i,j;
	scanf("%d",&n);
    length=n;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(j=i;j<n-1;j++)
				a[j]=a[j+1];
			i--;
			n--;
		}
	}
         printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(" %d",a[i]);
	printf("\n");
	return 0;
}