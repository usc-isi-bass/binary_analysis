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

main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{	printf("%d=",i);
		for(j=3;j<=i/2;j=j+2)
		{	for(k=3;k<=sqrt(i);k=k+2)
			{	if(j%k==0&&j!=k) 
				break;
				else if((i-j)%k==0&&(i-j)!=k)
				break;
			}
			if(k>=sqrt(i)) 
			{	printf("%d+%d\n",j,i-j);
				break;
			}
		}
	}
}