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
	int n , a[300] , shifouchuxian ;
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
		scanf("%d",&a[i]);                             
	printf("%d",a[0]);
	for(int i = 1;i<n;i++)
	{
		shifouchuxian = 0;
		for(int j = 0;j<i;j++)
		{
			if(a[j] == a[i])                        				shifouchuxian += 1;                         		}
		if(shifouchuxian == 0)
			printf(",%d",a[i]);                       	}
	return 0;
}
