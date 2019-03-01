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
	int n;
	int a[100001];
	int k;
	int i;
	int sum;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
				sum=sum+1;
		if(i==0)
		{
			if(a[i]!=k)
				printf("%d",a[i]);

		}
		if(i!=0)
		{

			if(a[i]!=k)
			{
				if(i!=sum)
					printf(" %d",a[i]);

				if(i==sum)
					printf("%d",a[i]);}
		}
		
	}
    



	



	return 0;
}
