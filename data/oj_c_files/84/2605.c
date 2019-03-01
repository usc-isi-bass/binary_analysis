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

int main(int argc, char* argv[])
{
	long a[101];
	int n=0;
	long i,max,big;

	scanf("%d",&n);
	max=0;
	big=0;
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	
		if (a[i]>max) 
		{
			big=max;

			max=a[i];

		};
	
			
	}
	printf("%d\n",max);
	printf("%d",big);



	
	



	return 0;
}