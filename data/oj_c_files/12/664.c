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
	int a[16],i,j,m,b;
	do
	{
		scanf("%d",&a[0]);
		if(a[0]==-1)
        {
			break;
		}
		for(i=1;i<=15;i++)
		 {
			scanf("%d",&a[i]);
            if(a[i]==0)
			{
			  break;
			}
		}
		j=0;
		for(m=0;m<=i-1;m++)
		{
			for(b=0;b<=i-1;b++)
			{
			    if(a[m]==a[b]*2)
				{
					j++;
				}
			}
		}
	  printf("%d\n",j);	
	}
	while(1);
	return 0;
}