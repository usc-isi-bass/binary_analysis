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
	int n,a[300],i,b[300],j,m,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	printf("%d",b[0]);
	for(i=1;i<n;i++)
	{
		m=0;
		for(j=0;j<k+1;j++)
		{
			if(a[i]==b[j])
			{
				m=1;
				break;
			}
		}
		if(m==0) 
		{
			
			k=k+1;
			b[k]=a[i];
		        if(k!=0) printf(",%d",b[k]);
		}
	}
	return 0;
}




 
