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
	int n,k,a[1000],b[1001],i,q;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i+1]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(q=1;q<n+1;q++)
		{
			if(a[i]+b[q]==k){
				printf("yes\n");
				if(q==n){
					q--;
				}
				break;
			}
		}
		if(q<n)
			break;
		if(i==n-1)
		{
			printf("no\n");
		}
		
	}
}
