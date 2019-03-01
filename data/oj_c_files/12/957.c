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
	int i,j,n=0,a[16],shu,sum=0;
	while (1)
	{
		scanf("%d",&shu);
		if (shu==-1)
			return 0;
		else if (shu==0)
		{
			for (i=1;i<=n;i++)
			{
				if (a[i]&&a[i]%2==0)
				{
					for (j=1;j<=n;j++)
						if (a[j]==a[i]/2)
							sum++;
				}
			}
			printf("%d\n",sum);
			sum=0;
			n=0;
		}
		else
		{
			n++;
			a[n]=shu;
		}
	}
	return 0;
}