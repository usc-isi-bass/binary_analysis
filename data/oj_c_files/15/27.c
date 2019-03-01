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
	scanf("%d",&n);

	int i,j;
	int t,t1,t2;
	int a[10000];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[0]=255;
			scanf("%d",&a[j+1]);
			if(a[j]==0 && a[j-1]==255)
			{

				t1=j;
			}

			if(a[j-1]==0 && a[j]==255)
			{
				t2=j-1;
			}

		}
	}
	printf("%d",(t2-t1-1)*(t2-t1-1));
	return 0;
}