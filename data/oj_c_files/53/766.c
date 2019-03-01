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
	int n,i,j,a[400],b[400]={0},*p;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	printf("%d",*p);
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(*(p+j)!=*(p+i))
				b[i]++;
			
		}
		if(b[i]==i)
		printf(",%d",*(p+i));
		
	}
}
