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
	int n,i,j,k,p,q,m;
	int a[20000];
	int b[20000];


	scanf("%d",&n);



	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	b[0]=0;




	for(j=1;j<n;j++)
	{
		b[j]=0;
		for(k=0;k<j;k++)
		{
			if(a[j]==a[k])
				b[j]++;
		}

	}

	printf("%d",a[0]);

	for(p=1;p<n;p++)
	{
		if(b[p]==0)
			printf(" %d",a[p]);
	}
	



	return 0;
}

