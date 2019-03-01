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
	int a[500],b[500],i,r=0,p,N,m=0,temp;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		p=a[i]%2;
		if(p==1)
		{
			b[r]=a[i];
			r++;
		}
	}
	for(m=1;m<r;m++)
		for(i=0;i<r-m;i++)
		{
			if(b[i]>b[i+1])
			{
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}
	printf("%d",b[0]);
	for(i=1;i<r;i++)
		printf(",%d",b[i]);
	printf("\n");
	return 0;
}