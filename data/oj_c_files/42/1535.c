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
{int i,j,n,k,a[100000],m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	i=0;
	j=n;
	while(i<j)
	{	if(a[i]==m)
		{	j--;
                       
			for(k=i;k<j;k++)
				a[k]=a[k+1];
i--;
		}
		i++;	
	}
	for(i=0;i<j-1;i++)
	{	printf("%d ",a[i]);
	}
		printf("%d",a[j-1]);
	return 0;
}