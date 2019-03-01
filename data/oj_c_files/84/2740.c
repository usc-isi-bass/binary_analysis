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
	int n,a,b,max1,max2,temp;
	scanf("%d%d%d",&n,&a,&b);
	max1=a;max2=b;
	for (int i=3;i<=n;i++)
	{
		scanf("%d",&temp);
		if (temp>=max1)
		{
			max2=max1;
			max1=temp;
		}
		else if(temp>=max2)
			max2=temp;
	}
	printf("%d\n%d\n",max1,max2);
	return 0;
}

