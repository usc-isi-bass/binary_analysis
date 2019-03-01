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

void main()
{
	int n,i,j,k;
	int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
    i=0;    

	
	while(i<n-1)
	{
		k=0;
        
		for(j=0;j<=i;j++)
			if(a[i+1]!=a[j])
				k++;
		if(k==(1+i))
			printf(",%d",a[i+1]);
		i++;
	}
}

			    

		