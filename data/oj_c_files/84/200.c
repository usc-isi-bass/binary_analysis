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
    int n,a[100],i=0,max=0,max2=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		if(a[i]>max&&a[i]>max2)
		{
			max2=max;
			max=a[i];
        }    
		else if(a[i]<max&&a[i]>max2)
			max2=a[i];
		i++;
	}
    printf("%d\n%d\n",max,max2);
	return 0;
}


