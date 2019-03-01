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
	int n,i,a[N],b[N],t,k=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
        for(t=0,l=0;t<i;t++)
		{
            if(a[t]==a[i])
				l++;
		}
           if(l==0)
		   {
			   b[k]=a[i];
			   k++;
		   }
	}

	for(i=0;i<k-1;i++)
		printf("%d,",b[i]);
	printf("%d",b[k-1]);
	return 0;
}