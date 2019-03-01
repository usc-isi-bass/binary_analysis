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
	int a[100000];
	int i,j,k=0,num=0,sum=0,tot=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=0;
		for(j=1;j<=i;j++)
		{
		
			if(i%j==0)
				num=num+1;

		}
		if(num==2)
		{sum=sum+1;
		a[k]=i;
		k=k+1;
		}

	}
	for(j=0;j<k-1;j++)
	{
		if(a[j+1]-a[j]==2)
		{
			tot=tot+1;
			printf("%d %d\n",a[j],a[j+1]);
		}

	}
	if(tot==0)
		printf("empty");
	return 0;
		
		
		
		
	


}
